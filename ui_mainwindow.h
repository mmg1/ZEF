/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFormLayout *formLayout_3;
    QLabel *lbl_ProcID;
    QHBoxLayout *hLayout_txt_ProcName;
    QLabel *lbl_ProcName;
    QLineEdit *txt_ProcName;
    QHBoxLayout *hLayout_btn_GetProcBtns;
    QPushButton *btn_GetProcID;
    QPushButton *btn_GetProcName;
    QHBoxLayout *hLayout_Line1;
    QFrame *line;
    QSpacerItem *verticalSpacer;
    QLabel *lbl_ModAddr;
    QHBoxLayout *hLayout_txt_ModName;
    QLabel *lbl_ModName;
    QLineEdit *txt_ModName;
    QHBoxLayout *hLayout_btn_GetMod;
    QPushButton *btn_GetModAddr;
    QHBoxLayout *hLayout_Line2;
    QFrame *line_2;
    QHBoxLayout *hLayout_txt_Addr;
    QLabel *lbl_Address;
    QLineEdit *txt_Address;
    QHBoxLayout *hLayout_txt_SizeAmnt;
    QLabel *lbl_Size;
    QLineEdit *txt_Size;
    QHBoxLayout *hLayout_btn_RW;
    QPushButton *btn_Read;
    QPushButton *btn_Write;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QDockWidget *dockWidget_2;
    QWidget *dockWidgetContents_4;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab_Data;
    QGridLayout *gridLayout_2;
    QPlainTextEdit *txt_Output;
    QWidget *tab_ProcInfo;
    QGridLayout *gridLayout_7;
    QPlainTextEdit *txt_ProcInfo;
    QWidget *tab_ModInfo;
    QGridLayout *gridLayout_6;
    QPlainTextEdit *txt_ModInfo;
    QWidget *tab_Debug;
    QGridLayout *gridLayout_5;
    QPlainTextEdit *txt_Debug;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(809, 681);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        formLayout_3 = new QFormLayout(centralwidget);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        lbl_ProcID = new QLabel(centralwidget);
        lbl_ProcID->setObjectName(QString::fromUtf8("lbl_ProcID"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lbl_ProcID->sizePolicy().hasHeightForWidth());
        lbl_ProcID->setSizePolicy(sizePolicy);
        lbl_ProcID->setMinimumSize(QSize(250, 0));
        lbl_ProcID->setMaximumSize(QSize(16777215, 500));
        QFont font;
        font.setFamily(QString::fromUtf8("Consolas"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        lbl_ProcID->setFont(font);
        lbl_ProcID->setMouseTracking(false);
        lbl_ProcID->setLayoutDirection(Qt::LeftToRight);
        lbl_ProcID->setTextFormat(Qt::PlainText);
        lbl_ProcID->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout_3->setWidget(0, QFormLayout::SpanningRole, lbl_ProcID);

        hLayout_txt_ProcName = new QHBoxLayout();
        hLayout_txt_ProcName->setObjectName(QString::fromUtf8("hLayout_txt_ProcName"));
        hLayout_txt_ProcName->setSizeConstraint(QLayout::SetMaximumSize);
        lbl_ProcName = new QLabel(centralwidget);
        lbl_ProcName->setObjectName(QString::fromUtf8("lbl_ProcName"));
        lbl_ProcName->setFont(font);

        hLayout_txt_ProcName->addWidget(lbl_ProcName);

        txt_ProcName = new QLineEdit(centralwidget);
        txt_ProcName->setObjectName(QString::fromUtf8("txt_ProcName"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Consolas"));
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setWeight(50);
        txt_ProcName->setFont(font1);

        hLayout_txt_ProcName->addWidget(txt_ProcName);


        formLayout_3->setLayout(1, QFormLayout::SpanningRole, hLayout_txt_ProcName);

        hLayout_btn_GetProcBtns = new QHBoxLayout();
        hLayout_btn_GetProcBtns->setObjectName(QString::fromUtf8("hLayout_btn_GetProcBtns"));
        btn_GetProcID = new QPushButton(centralwidget);
        btn_GetProcID->setObjectName(QString::fromUtf8("btn_GetProcID"));
        btn_GetProcID->setMinimumSize(QSize(140, 25));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Consolas"));
        font2.setPointSize(10);
        btn_GetProcID->setFont(font2);

        hLayout_btn_GetProcBtns->addWidget(btn_GetProcID);

        btn_GetProcName = new QPushButton(centralwidget);
        btn_GetProcName->setObjectName(QString::fromUtf8("btn_GetProcName"));
        btn_GetProcName->setMinimumSize(QSize(141, 25));
        btn_GetProcName->setFont(font2);

        hLayout_btn_GetProcBtns->addWidget(btn_GetProcName);


        formLayout_3->setLayout(2, QFormLayout::LabelRole, hLayout_btn_GetProcBtns);

        hLayout_Line1 = new QHBoxLayout();
        hLayout_Line1->setObjectName(QString::fromUtf8("hLayout_Line1"));
        hLayout_Line1->setContentsMargins(-1, -1, 0, 0);
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        hLayout_Line1->addWidget(line);


        formLayout_3->setLayout(4, QFormLayout::SpanningRole, hLayout_Line1);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        formLayout_3->setItem(5, QFormLayout::LabelRole, verticalSpacer);

        lbl_ModAddr = new QLabel(centralwidget);
        lbl_ModAddr->setObjectName(QString::fromUtf8("lbl_ModAddr"));
        sizePolicy.setHeightForWidth(lbl_ModAddr->sizePolicy().hasHeightForWidth());
        lbl_ModAddr->setSizePolicy(sizePolicy);
        lbl_ModAddr->setMinimumSize(QSize(500, 0));
        lbl_ModAddr->setMaximumSize(QSize(16777215, 500));
        lbl_ModAddr->setFont(font);
        lbl_ModAddr->setLayoutDirection(Qt::LeftToRight);
        lbl_ModAddr->setTextFormat(Qt::PlainText);
        lbl_ModAddr->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout_3->setWidget(6, QFormLayout::SpanningRole, lbl_ModAddr);

        hLayout_txt_ModName = new QHBoxLayout();
        hLayout_txt_ModName->setObjectName(QString::fromUtf8("hLayout_txt_ModName"));
        lbl_ModName = new QLabel(centralwidget);
        lbl_ModName->setObjectName(QString::fromUtf8("lbl_ModName"));
        lbl_ModName->setFont(font);

        hLayout_txt_ModName->addWidget(lbl_ModName);

        txt_ModName = new QLineEdit(centralwidget);
        txt_ModName->setObjectName(QString::fromUtf8("txt_ModName"));
        txt_ModName->setFont(font1);

        hLayout_txt_ModName->addWidget(txt_ModName);


        formLayout_3->setLayout(7, QFormLayout::SpanningRole, hLayout_txt_ModName);

        hLayout_btn_GetMod = new QHBoxLayout();
        hLayout_btn_GetMod->setObjectName(QString::fromUtf8("hLayout_btn_GetMod"));
        btn_GetModAddr = new QPushButton(centralwidget);
        btn_GetModAddr->setObjectName(QString::fromUtf8("btn_GetModAddr"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btn_GetModAddr->sizePolicy().hasHeightForWidth());
        btn_GetModAddr->setSizePolicy(sizePolicy1);
        btn_GetModAddr->setMinimumSize(QSize(150, 25));
        btn_GetModAddr->setMaximumSize(QSize(16777215, 50));
        btn_GetModAddr->setFont(font2);

        hLayout_btn_GetMod->addWidget(btn_GetModAddr);


        formLayout_3->setLayout(8, QFormLayout::LabelRole, hLayout_btn_GetMod);

        hLayout_Line2 = new QHBoxLayout();
        hLayout_Line2->setObjectName(QString::fromUtf8("hLayout_Line2"));
        hLayout_Line2->setContentsMargins(-1, -1, 0, 0);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(line_2->sizePolicy().hasHeightForWidth());
        line_2->setSizePolicy(sizePolicy2);
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        hLayout_Line2->addWidget(line_2);


        formLayout_3->setLayout(10, QFormLayout::SpanningRole, hLayout_Line2);

        hLayout_txt_Addr = new QHBoxLayout();
        hLayout_txt_Addr->setObjectName(QString::fromUtf8("hLayout_txt_Addr"));
        hLayout_txt_Addr->setContentsMargins(-1, -1, 0, 0);
        lbl_Address = new QLabel(centralwidget);
        lbl_Address->setObjectName(QString::fromUtf8("lbl_Address"));
        lbl_Address->setFont(font);

        hLayout_txt_Addr->addWidget(lbl_Address);

        txt_Address = new QLineEdit(centralwidget);
        txt_Address->setObjectName(QString::fromUtf8("txt_Address"));
        txt_Address->setMinimumSize(QSize(0, 30));

        hLayout_txt_Addr->addWidget(txt_Address);


        formLayout_3->setLayout(12, QFormLayout::SpanningRole, hLayout_txt_Addr);

        hLayout_txt_SizeAmnt = new QHBoxLayout();
        hLayout_txt_SizeAmnt->setObjectName(QString::fromUtf8("hLayout_txt_SizeAmnt"));
        hLayout_txt_SizeAmnt->setContentsMargins(-1, -1, 0, 0);
        lbl_Size = new QLabel(centralwidget);
        lbl_Size->setObjectName(QString::fromUtf8("lbl_Size"));
        lbl_Size->setFont(font);

        hLayout_txt_SizeAmnt->addWidget(lbl_Size);

        txt_Size = new QLineEdit(centralwidget);
        txt_Size->setObjectName(QString::fromUtf8("txt_Size"));
        txt_Size->setMinimumSize(QSize(0, 30));

        hLayout_txt_SizeAmnt->addWidget(txt_Size);


        formLayout_3->setLayout(13, QFormLayout::LabelRole, hLayout_txt_SizeAmnt);

        hLayout_btn_RW = new QHBoxLayout();
        hLayout_btn_RW->setObjectName(QString::fromUtf8("hLayout_btn_RW"));
        hLayout_btn_RW->setContentsMargins(-1, -1, 0, 0);
        btn_Read = new QPushButton(centralwidget);
        btn_Read->setObjectName(QString::fromUtf8("btn_Read"));
        btn_Read->setMinimumSize(QSize(141, 25));
        btn_Read->setFont(font2);

        hLayout_btn_RW->addWidget(btn_Read);

        btn_Write = new QPushButton(centralwidget);
        btn_Write->setObjectName(QString::fromUtf8("btn_Write"));
        btn_Write->setMinimumSize(QSize(141, 25));
        btn_Write->setFont(font2);

        hLayout_btn_RW->addWidget(btn_Write);


        formLayout_3->setLayout(14, QFormLayout::LabelRole, hLayout_btn_RW);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        formLayout_3->setItem(11, QFormLayout::LabelRole, verticalSpacer_2);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        formLayout_3->setItem(3, QFormLayout::LabelRole, verticalSpacer_3);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        formLayout_3->setItem(9, QFormLayout::LabelRole, verticalSpacer_4);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 809, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        dockWidget_2 = new QDockWidget(MainWindow);
        dockWidget_2->setObjectName(QString::fromUtf8("dockWidget_2"));
        dockWidget_2->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName(QString::fromUtf8("dockWidgetContents_4"));
        gridLayout = new QGridLayout(dockWidgetContents_4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(dockWidgetContents_4);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setMovable(false);
        tab_Data = new QWidget();
        tab_Data->setObjectName(QString::fromUtf8("tab_Data"));
        gridLayout_2 = new QGridLayout(tab_Data);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        txt_Output = new QPlainTextEdit(tab_Data);
        txt_Output->setObjectName(QString::fromUtf8("txt_Output"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Consolas"));
        font3.setPointSize(12);
        font3.setStyleStrategy(QFont::PreferDefault);
        txt_Output->setFont(font3);
        txt_Output->setReadOnly(true);

        gridLayout_2->addWidget(txt_Output, 0, 0, 1, 1);

        tabWidget->addTab(tab_Data, QString());
        tab_ProcInfo = new QWidget();
        tab_ProcInfo->setObjectName(QString::fromUtf8("tab_ProcInfo"));
        gridLayout_7 = new QGridLayout(tab_ProcInfo);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        txt_ProcInfo = new QPlainTextEdit(tab_ProcInfo);
        txt_ProcInfo->setObjectName(QString::fromUtf8("txt_ProcInfo"));
        txt_ProcInfo->setFont(font3);
        txt_ProcInfo->setReadOnly(true);

        gridLayout_7->addWidget(txt_ProcInfo, 0, 0, 1, 1);

        tabWidget->addTab(tab_ProcInfo, QString());
        tab_ModInfo = new QWidget();
        tab_ModInfo->setObjectName(QString::fromUtf8("tab_ModInfo"));
        gridLayout_6 = new QGridLayout(tab_ModInfo);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        txt_ModInfo = new QPlainTextEdit(tab_ModInfo);
        txt_ModInfo->setObjectName(QString::fromUtf8("txt_ModInfo"));
        txt_ModInfo->setFont(font3);
        txt_ModInfo->setReadOnly(true);

        gridLayout_6->addWidget(txt_ModInfo, 0, 0, 1, 1);

        tabWidget->addTab(tab_ModInfo, QString());
        tab_Debug = new QWidget();
        tab_Debug->setObjectName(QString::fromUtf8("tab_Debug"));
        gridLayout_5 = new QGridLayout(tab_Debug);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        txt_Debug = new QPlainTextEdit(tab_Debug);
        txt_Debug->setObjectName(QString::fromUtf8("txt_Debug"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Consolas"));
        font4.setPointSize(9);
        font4.setStyleStrategy(QFont::PreferDefault);
        txt_Debug->setFont(font4);
        txt_Debug->setReadOnly(true);

        gridLayout_5->addWidget(txt_Debug, 0, 0, 1, 1);

        tabWidget->addTab(tab_Debug, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        dockWidget_2->setWidget(dockWidgetContents_4);
        MainWindow->addDockWidget(Qt::BottomDockWidgetArea, dockWidget_2);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "ZEF - Z0F Exploitation Framework", nullptr));
        lbl_ProcID->setText(QCoreApplication::translate("MainWindow", "Process ID -", nullptr));
        lbl_ProcName->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        txt_ProcName->setText(QCoreApplication::translate("MainWindow", "Testing.exe", nullptr));
        btn_GetProcID->setText(QCoreApplication::translate("MainWindow", "Get Process by Name", nullptr));
        btn_GetProcName->setText(QCoreApplication::translate("MainWindow", "Get Process by ID", nullptr));
        lbl_ModAddr->setText(QCoreApplication::translate("MainWindow", "Module Address -", nullptr));
        lbl_ModName->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        txt_ModName->setText(QCoreApplication::translate("MainWindow", "Testing.exe", nullptr));
        btn_GetModAddr->setText(QCoreApplication::translate("MainWindow", "Get Module by Name", nullptr));
        lbl_Address->setText(QCoreApplication::translate("MainWindow", "Address:", nullptr));
        lbl_Size->setText(QCoreApplication::translate("MainWindow", "Size/Amount:", nullptr));
        btn_Read->setText(QCoreApplication::translate("MainWindow", "Read", nullptr));
        btn_Write->setText(QCoreApplication::translate("MainWindow", "Write (TODO)", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_Data), QCoreApplication::translate("MainWindow", "Data", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_ProcInfo), QCoreApplication::translate("MainWindow", "Process Info", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_ModInfo), QCoreApplication::translate("MainWindow", "Module Info", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_Debug), QCoreApplication::translate("MainWindow", "Debug", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
