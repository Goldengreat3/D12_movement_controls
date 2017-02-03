/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout;
    QAction *actionHelp;
    QAction *actionExit;
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QWidget *ArmPage;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_7;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_8;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit_5;
    QLabel *label_10;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_9;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_6;
    QPushButton *pushButton_4;
    QLabel *label;
    QLabel *label_7;
    QLabel *label_3;
    QLabel *label_2;
    QPushButton *pushButton_5;
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber_2;
    QLCDNumber *lcdNumber_3;
    QLCDNumber *lcdNumber_4;
    QLCDNumber *lcdNumber_5;
    QWidget *ExpReelPage;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_12;
    QPushButton *pushButton_6;
    QLineEdit *lineEdit;
    QPushButton *pushButton_7;
    QLineEdit *lineEdit_2;
    QLabel *label_15;
    QLabel *label_11;
    QLabel *label_16;
    QLCDNumber *lcdNumber_6;
    QLCDNumber *lcdNumber_7;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QPushButton *ExplorerReelButton;
    QPushButton *ArmButton;
    QPushButton *HomeButton;
    QMenuBar *menuBar;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(610, 445);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(20, 49, 581, 351));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        pushButton_8 = new QPushButton(page);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(190, 50, 191, 23));
        pushButton_9 = new QPushButton(page);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(190, 90, 191, 23));
        pushButton_10 = new QPushButton(page);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(190, 130, 191, 23));
        stackedWidget->addWidget(page);
        ArmPage = new QWidget();
        ArmPage->setObjectName(QStringLiteral("ArmPage"));
        gridLayoutWidget = new QWidget(ArmPage);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 21, 571, 321));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_7 = new QLineEdit(gridLayoutWidget);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        gridLayout->addWidget(lineEdit_7, 6, 1, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 0, 2, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 2, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 2, 0, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 2, 2, 1, 1);

        lineEdit_5 = new QLineEdit(gridLayoutWidget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        gridLayout->addWidget(lineEdit_5, 2, 1, 1, 1);

        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 6, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 6, 3, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 4, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 4, 3, 1, 1);

        lineEdit_3 = new QLineEdit(gridLayoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 0, 1, 1, 1);

        lineEdit_4 = new QLineEdit(gridLayoutWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        gridLayout->addWidget(lineEdit_4, 1, 1, 1, 1);

        lineEdit_6 = new QLineEdit(gridLayoutWidget);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        gridLayout->addWidget(lineEdit_6, 4, 1, 1, 1);

        pushButton_4 = new QPushButton(gridLayoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 4, 2, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 3, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 1, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 3, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 3, 1, 1);

        pushButton_5 = new QPushButton(gridLayoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        gridLayout->addWidget(pushButton_5, 6, 2, 1, 1);

        lcdNumber = new QLCDNumber(gridLayoutWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));

        gridLayout->addWidget(lcdNumber, 0, 4, 1, 1);

        lcdNumber_2 = new QLCDNumber(gridLayoutWidget);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));

        gridLayout->addWidget(lcdNumber_2, 1, 4, 1, 1);

        lcdNumber_3 = new QLCDNumber(gridLayoutWidget);
        lcdNumber_3->setObjectName(QStringLiteral("lcdNumber_3"));

        gridLayout->addWidget(lcdNumber_3, 2, 4, 1, 1);

        lcdNumber_4 = new QLCDNumber(gridLayoutWidget);
        lcdNumber_4->setObjectName(QStringLiteral("lcdNumber_4"));

        gridLayout->addWidget(lcdNumber_4, 4, 4, 1, 1);

        lcdNumber_5 = new QLCDNumber(gridLayoutWidget);
        lcdNumber_5->setObjectName(QStringLiteral("lcdNumber_5"));

        gridLayout->addWidget(lcdNumber_5, 6, 4, 1, 1);

        stackedWidget->addWidget(ArmPage);
        ExpReelPage = new QWidget();
        ExpReelPage->setObjectName(QStringLiteral("ExpReelPage"));
        gridLayoutWidget_2 = new QWidget(ExpReelPage);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(0, 20, 571, 221));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(gridLayoutWidget_2);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_2->addWidget(label_12, 2, 0, 1, 1);

        pushButton_6 = new QPushButton(gridLayoutWidget_2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        gridLayout_2->addWidget(pushButton_6, 1, 2, 1, 1);

        lineEdit = new QLineEdit(gridLayoutWidget_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout_2->addWidget(lineEdit, 1, 1, 1, 1);

        pushButton_7 = new QPushButton(gridLayoutWidget_2);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        gridLayout_2->addWidget(pushButton_7, 2, 2, 1, 1);

        lineEdit_2 = new QLineEdit(gridLayoutWidget_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout_2->addWidget(lineEdit_2, 2, 1, 1, 1);

        label_15 = new QLabel(gridLayoutWidget_2);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_2->addWidget(label_15, 2, 3, 1, 1);

        label_11 = new QLabel(gridLayoutWidget_2);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_2->addWidget(label_11, 1, 0, 1, 1);

        label_16 = new QLabel(gridLayoutWidget_2);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_2->addWidget(label_16, 1, 3, 1, 1);

        lcdNumber_6 = new QLCDNumber(gridLayoutWidget_2);
        lcdNumber_6->setObjectName(QStringLiteral("lcdNumber_6"));

        gridLayout_2->addWidget(lcdNumber_6, 1, 4, 1, 1);

        lcdNumber_7 = new QLCDNumber(gridLayoutWidget_2);
        lcdNumber_7->setObjectName(QStringLiteral("lcdNumber_7"));

        gridLayout_2->addWidget(lcdNumber_7, 2, 4, 1, 1);

        stackedWidget->addWidget(ExpReelPage);
        gridLayoutWidget_3 = new QWidget(centralWidget);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(19, 9, 571, 51));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        ExplorerReelButton = new QPushButton(gridLayoutWidget_3);
        ExplorerReelButton->setObjectName(QStringLiteral("ExplorerReelButton"));

        gridLayout_3->addWidget(ExplorerReelButton, 0, 2, 1, 1);

        ArmButton = new QPushButton(gridLayoutWidget_3);
        ArmButton->setObjectName(QStringLiteral("ArmButton"));

        gridLayout_3->addWidget(ArmButton, 0, 1, 1, 1);

        HomeButton = new QPushButton(gridLayoutWidget_3);
        HomeButton->setObjectName(QStringLiteral("HomeButton"));

        gridLayout_3->addWidget(HomeButton, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 610, 21));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuHelp->menuAction());
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionHelp);
        menuHelp->addAction(actionExit);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("MainWindow", "About", Q_NULLPTR));
        actionHelp->setText(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainWindow", "Reset to Default Arm Position", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MainWindow", "Emergency Stop", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("MainWindow", "Self Destruct", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Execute", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Execute", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Arm Joint #2 Rotation", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "Execute", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Platform Up/Down", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Position:", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Arm Base Rotation", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Platform Left/Right", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Position:", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "Execute", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Position:", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Arm Joint #1 Rotation", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Position:", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Position:", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "Execute", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Reel", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "Execute", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", "Execute", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "Reel Distance", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Explorer", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "Explorer Distance", Q_NULLPTR));
        ExplorerReelButton->setText(QApplication::translate("MainWindow", "Explorer/Reel", Q_NULLPTR));
        ArmButton->setText(QApplication::translate("MainWindow", "Arm", Q_NULLPTR));
        HomeButton->setText(QApplication::translate("MainWindow", "Home", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Info", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
