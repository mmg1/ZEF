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
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *txt_ProcName;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *btn_GetProcID;
    QPushButton *btn_GetProcName;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *txt_ModName;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *btn_GetModAddr;
    QPushButton *btn_GetProcName_2;
    QLabel *lbl_ProcID;
    QLabel *lbl_ModAddr;
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
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setSizeConstraint(QLayout::SetMaximumSize);
        txt_ProcName = new QLineEdit(centralwidget);
        txt_ProcName->setObjectName(QString::fromUtf8("txt_ProcName"));
        QFont font;
        font.setFamily(QString::fromUtf8("Consolas"));
        font.setPointSize(16);
        font.setBold(false);
        font.setWeight(50);
        txt_ProcName->setFont(font);

        horizontalLayout_5->addWidget(txt_ProcName);


        formLayout_3->setLayout(1, QFormLayout::SpanningRole, horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        btn_GetProcID = new QPushButton(centralwidget);
        btn_GetProcID->setObjectName(QString::fromUtf8("btn_GetProcID"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Consolas"));
        font1.setPointSize(10);
        btn_GetProcID->setFont(font1);

        horizontalLayout_6->addWidget(btn_GetProcID);

        btn_GetProcName = new QPushButton(centralwidget);
        btn_GetProcName->setObjectName(QString::fromUtf8("btn_GetProcName"));
        btn_GetProcName->setFont(font1);

        horizontalLayout_6->addWidget(btn_GetProcName);


        formLayout_3->setLayout(2, QFormLayout::LabelRole, horizontalLayout_6);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        formLayout_3->setItem(3, QFormLayout::LabelRole, verticalSpacer);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        txt_ModName = new QLineEdit(centralwidget);
        txt_ModName->setObjectName(QString::fromUtf8("txt_ModName"));
        txt_ModName->setFont(font);

        horizontalLayout_7->addWidget(txt_ModName);


        formLayout_3->setLayout(5, QFormLayout::SpanningRole, horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        btn_GetModAddr = new QPushButton(centralwidget);
        btn_GetModAddr->setObjectName(QString::fromUtf8("btn_GetModAddr"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_GetModAddr->sizePolicy().hasHeightForWidth());
        btn_GetModAddr->setSizePolicy(sizePolicy);
        btn_GetModAddr->setMinimumSize(QSize(150, 25));
        btn_GetModAddr->setMaximumSize(QSize(16777215, 50));
        btn_GetModAddr->setFont(font1);

        horizontalLayout_8->addWidget(btn_GetModAddr);

        btn_GetProcName_2 = new QPushButton(centralwidget);
        btn_GetProcName_2->setObjectName(QString::fromUtf8("btn_GetProcName_2"));
        sizePolicy.setHeightForWidth(btn_GetProcName_2->sizePolicy().hasHeightForWidth());
        btn_GetProcName_2->setSizePolicy(sizePolicy);
        btn_GetProcName_2->setMinimumSize(QSize(150, 25));
        btn_GetProcName_2->setMaximumSize(QSize(16777215, 50));
        btn_GetProcName_2->setFont(font1);

        horizontalLayout_8->addWidget(btn_GetProcName_2);


        formLayout_3->setLayout(6, QFormLayout::LabelRole, horizontalLayout_8);

        lbl_ProcID = new QLabel(centralwidget);
        lbl_ProcID->setObjectName(QString::fromUtf8("lbl_ProcID"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lbl_ProcID->sizePolicy().hasHeightForWidth());
        lbl_ProcID->setSizePolicy(sizePolicy1);
        lbl_ProcID->setMinimumSize(QSize(250, 0));
        lbl_ProcID->setMaximumSize(QSize(16777215, 500));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Consolas"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        lbl_ProcID->setFont(font2);
        lbl_ProcID->setMouseTracking(false);
        lbl_ProcID->setLayoutDirection(Qt::LeftToRight);
        lbl_ProcID->setTextFormat(Qt::PlainText);
        lbl_ProcID->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout_3->setWidget(0, QFormLayout::SpanningRole, lbl_ProcID);

        lbl_ModAddr = new QLabel(centralwidget);
        lbl_ModAddr->setObjectName(QString::fromUtf8("lbl_ModAddr"));
        sizePolicy1.setHeightForWidth(lbl_ModAddr->sizePolicy().hasHeightForWidth());
        lbl_ModAddr->setSizePolicy(sizePolicy1);
        lbl_ModAddr->setMinimumSize(QSize(500, 0));
        lbl_ModAddr->setMaximumSize(QSize(16777215, 500));
        lbl_ModAddr->setFont(font2);
        lbl_ModAddr->setLayoutDirection(Qt::LeftToRight);
        lbl_ModAddr->setTextFormat(Qt::PlainText);
        lbl_ModAddr->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout_3->setWidget(4, QFormLayout::SpanningRole, lbl_ModAddr);

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

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "ZEF - Z0F Exploitation Framework", nullptr));
        txt_ProcName->setText(QCoreApplication::translate("MainWindow", "Testing.exe", nullptr));
        btn_GetProcID->setText(QCoreApplication::translate("MainWindow", "Get Process by Name", nullptr));
        btn_GetProcName->setText(QCoreApplication::translate("MainWindow", "Get Process by ID", nullptr));
        txt_ModName->setText(QCoreApplication::translate("MainWindow", "Testing.exe", nullptr));
        btn_GetModAddr->setText(QCoreApplication::translate("MainWindow", "Get Module by Name", nullptr));
        btn_GetProcName_2->setText(QCoreApplication::translate("MainWindow", "Get Module by ID (TODO)", nullptr));
        lbl_ProcID->setText(QCoreApplication::translate("MainWindow", "Process ID -", nullptr));
        lbl_ModAddr->setText(QCoreApplication::translate("MainWindow", "Module Address -", nullptr));
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
