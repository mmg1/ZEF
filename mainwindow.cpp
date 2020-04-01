#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Process.h"
#include <sstream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    currentProcess = {0};
    currentModule = {0};
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(Update()));
    this->timer->start(2000);
}

MainWindow::~MainWindow()
{
    disconnect(timer, SIGNAL(timeout()), this, SLOT(Update()));
    delete ui;
}

// Function on timer:
void MainWindow::Update(){
    UpdateProcInfo();
    UpdateModInfo();
    return;
}

void MainWindow::ResetWindowTitle(){
    this->setWindowTitle("ZEF - Z0F Exploitation Framework");
}

void MainWindow::Log(QString str){
    ui->txt_Debug->appendPlainText(str);
}

void MainWindow::UpdateProcInfo(){
    ui->txt_ProcInfo->clear();

    if(!currentProcess.dwSize){
        ui->lbl_ProcID->setText("Process ID -");
        return;
    }

    ui->lbl_ProcID->setText("Process ID - " + QString::number(currentProcess.th32ProcessID));
    ui->txt_ProcInfo->appendPlainText("Name: " + QString::fromStdWString(currentProcess.szExeFile));
    ui->txt_ProcInfo->appendPlainText("ID: " + QString::number(currentProcess.th32ProcessID));
    ui->txt_ProcInfo->appendPlainText("Parent Process: " + QString::fromStdWString((GetProcEntry(currentProcess.th32ParentProcessID).szExeFile))
                                      + " (" + QString::number(currentProcess.th32ParentProcessID) + ")");
    ui->txt_ProcInfo->appendPlainText("Num of Threads: " + QString::number(currentProcess.cntThreads));
    return;
}

void MainWindow::UpdateModInfo(){
    ui->txt_ModInfo->clear();

    if(!currentModule.dwSize){
        ui->lbl_ModAddr->setText("Module Address -");
        return;
    }

    QString modAddr = QString("%1").arg((quintptr)currentModule.modBaseAddr, QT_POINTER_SIZE * 2, 16, QChar('0')).toUpper();

    ui->lbl_ModAddr->setText("Module Address - " + modAddr);
    ui->txt_ModInfo->appendPlainText("Name: " + QString::fromWCharArray(currentModule.szModule));
    ui->txt_ModInfo->appendPlainText("Path: " + QString::fromWCharArray(currentModule.szExePath));
    ui->txt_ModInfo->appendPlainText("Process ID: " + QString::number(currentModule.th32ProcessID));
    ui->txt_ModInfo->appendPlainText("Base Address: " + modAddr);
    ui->txt_ModInfo->appendPlainText("Size: " + QString::number(currentModule.modBaseSize));
    return;
}

// Get Proc by Name:
void MainWindow::on_btn_GetProcID_clicked()
{
    DWORD procID = GetProcID(ui->txt_ProcName->text().toStdWString());

    if(procID == 0xFFFFFFFF){
        Log("ERROR: Invalid Process Name.");
        currentProcess = {0};
        currentModule = {0};
        ResetWindowTitle();
        return;
    }

    setWindowTitle("ZEF - " + ui->txt_ProcName->text() + " : " + QString::number(procID));
    Log("Found Proc ID " + QString::number(procID) + " with name " + ui->txt_ProcName->text());

    currentProcess = GetProcEntry(procID);
    UpdateProcInfo();
}

// Get Proc By ID:
void MainWindow::on_btn_GetProcName_clicked()
{
    QString procName;
    bool isNum;

    //Check if input is a number:
    ui->txt_ProcName->text().toInt(&isNum, 10);
    if(!isNum){goto __invalidID;}

    procName = GetProcName(ui->txt_ProcName->text().toULong());
    if(procName.isEmpty()){
        __invalidID:
        Log("ERROR: Invalid Process ID.");
        ResetWindowTitle();
        return;
    }

    currentProcess = GetProcEntry(ui->txt_ProcName->text().toULong());
    UpdateProcInfo();

    ui->txt_ProcName->setText(procName);
    setWindowTitle("ZEF - " + ui->txt_ProcName->text() + " : " + ui->lbl_ProcID->text());
    Log("Found " + procName + " with ID " + ui->lbl_ProcID->text());
}

void MainWindow::on_btn_GetModAddr_clicked()
{
    MODULEENTRY32 mod = GetModule(currentProcess.th32ProcessID, ui->txt_ModName->text().toStdWString());

    if(!mod.dwSize){
        Log("ERROR: Invalid Module Name.");
        currentModule = {0};
        return;
    }

    currentModule = mod;
    UpdateModInfo();
}

void MainWindow::on_btn_Read_clicked()
{
    bool isValid;
    int size;
    ULONGLONG addr;
    byte currByte;
    HANDLE hProc;

    // TODO: More error handling?
    size = ui->txt_Size->text().toInt(&isValid, 10);
    if(!isValid || ui->txt_Size->text().toInt() <= 0){
        Log("Invalid Size.");
        return;
    }else if(!currentModule.dwSize){
        Log("Module needed before reading or writing memory.");
        return;
    }else if(size > 2048){
        Log("R/W size too big. Max is 2048 bytes.");
        return;
    }

    addr = ui->txt_Address->text().toULongLong(&isValid, 16);
    if(!isValid){
        Log("Invalid Address.");
        return;
    }

    hProc = OpenProcess(PROCESS_ALL_ACCESS, false, currentProcess.th32ProcessID);

    ui->txt_Output->clear();
    ui->txt_Output->insertPlainText("Reading " + QString::number(size) + " bytes at " + QString::number(addr, 16).toUpper()
                                    + " in module " + QString::fromStdWString(currentModule.szModule) + ":\n");

    // insertPlainText puts data at the front, which means the bytes don't need to be reversed :)
    for(int x = 0; x < size; x++){
        ReadProcessMemory(hProc, (LPCVOID)(addr + x), &currByte, 1, NULL);
        ui->txt_Output->insertPlainText(QString("%1").arg(currByte, 2, 16, QChar('0')).toUpper());
    }
    Log("Read " + QString::number(size) + " bytes at " + QString::number(addr, 16).toUpper() + ".");
    CloseHandle(hProc);
}
