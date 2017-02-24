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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *Home;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *ResetArmPushButton;
    QPushButton *ManualPushButton;
    QPushButton *QuitPushButton;
    QWidget *Arm;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *BaseExecute;
    QPushButton *WristUDExecute;
    QPushButton *LowerJointExecute;
    QPushButton *WristLRExecute;
    QPushButton *UpperJointExecute;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_4;
    QSpinBox *BaseInput;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_9;
    QLabel *label_8;
    QSpinBox *WristLRInput;
    QLabel *label_7;
    QLCDNumber *BaseLCD;
    QSpinBox *UpperJointInput;
    QSpinBox *WristUDInput;
    QSpinBox *LowerJointInput;
    QLCDNumber *LowerJointLCD;
    QLCDNumber *UpperJointLCD;
    QLCDNumber *WristLRLCD;
    QLCDNumber *WristUDLCD;
    QProgressBar *ArmProgressBar;
    QWidget *Explorer;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *ExplorerExecute;
    QLabel *label_14;
    QLabel *label_13;
    QPushButton *ReelExecute;
    QLCDNumber *ReelLCD;
    QSpinBox *ExplorerInput;
    QSpinBox *ReelInput;
    QLCDNumber *ExplorerLCD;
    QPushButton *CoordinatedExecute;
    QLabel *label_12;
    QSpinBox *CoordinatedInput;
    QProgressBar *ExplorerProgressBar;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(611, 389);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 0, 591, 331));
        Home = new QWidget();
        Home->setObjectName(QStringLiteral("Home"));
        verticalLayoutWidget = new QWidget(Home);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(130, 30, 281, 101));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        ResetArmPushButton = new QPushButton(verticalLayoutWidget);
        ResetArmPushButton->setObjectName(QStringLiteral("ResetArmPushButton"));

        verticalLayout->addWidget(ResetArmPushButton);

        ManualPushButton = new QPushButton(verticalLayoutWidget);
        ManualPushButton->setObjectName(QStringLiteral("ManualPushButton"));

        verticalLayout->addWidget(ManualPushButton);

        QuitPushButton = new QPushButton(verticalLayoutWidget);
        QuitPushButton->setObjectName(QStringLiteral("QuitPushButton"));

        verticalLayout->addWidget(QuitPushButton);

        tabWidget->addTab(Home, QString());
        Arm = new QWidget();
        Arm->setObjectName(QStringLiteral("Arm"));
        gridLayoutWidget = new QWidget(Arm);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 20, 561, 191));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        BaseExecute = new QPushButton(gridLayoutWidget);
        BaseExecute->setObjectName(QStringLiteral("BaseExecute"));

        gridLayout->addWidget(BaseExecute, 1, 2, 1, 1);

        WristUDExecute = new QPushButton(gridLayoutWidget);
        WristUDExecute->setObjectName(QStringLiteral("WristUDExecute"));

        gridLayout->addWidget(WristUDExecute, 5, 2, 1, 1);

        LowerJointExecute = new QPushButton(gridLayoutWidget);
        LowerJointExecute->setObjectName(QStringLiteral("LowerJointExecute"));

        gridLayout->addWidget(LowerJointExecute, 2, 2, 1, 1);

        WristLRExecute = new QPushButton(gridLayoutWidget);
        WristLRExecute->setObjectName(QStringLiteral("WristLRExecute"));

        gridLayout->addWidget(WristLRExecute, 4, 2, 1, 1);

        UpperJointExecute = new QPushButton(gridLayoutWidget);
        UpperJointExecute->setObjectName(QStringLiteral("UpperJointExecute"));

        gridLayout->addWidget(UpperJointExecute, 3, 2, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(true);

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 0, 3, 1, 1);

        BaseInput = new QSpinBox(gridLayoutWidget);
        BaseInput->setObjectName(QStringLiteral("BaseInput"));
        BaseInput->setMinimum(-5);
        BaseInput->setMaximum(5);

        gridLayout->addWidget(BaseInput, 1, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_9, 5, 0, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_8, 4, 0, 1, 1);

        WristLRInput = new QSpinBox(gridLayoutWidget);
        WristLRInput->setObjectName(QStringLiteral("WristLRInput"));
        WristLRInput->setMinimum(-5);
        WristLRInput->setMaximum(5);

        gridLayout->addWidget(WristLRInput, 4, 1, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 3, 0, 1, 1);

        BaseLCD = new QLCDNumber(gridLayoutWidget);
        BaseLCD->setObjectName(QStringLiteral("BaseLCD"));
        BaseLCD->setFrameShape(QFrame::StyledPanel);
        BaseLCD->setFrameShadow(QFrame::Raised);
        BaseLCD->setLineWidth(1);
        BaseLCD->setMidLineWidth(0);
        BaseLCD->setSmallDecimalPoint(false);
        BaseLCD->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(BaseLCD, 1, 3, 1, 1);

        UpperJointInput = new QSpinBox(gridLayoutWidget);
        UpperJointInput->setObjectName(QStringLiteral("UpperJointInput"));
        UpperJointInput->setMinimum(-5);
        UpperJointInput->setMaximum(5);

        gridLayout->addWidget(UpperJointInput, 3, 1, 1, 1);

        WristUDInput = new QSpinBox(gridLayoutWidget);
        WristUDInput->setObjectName(QStringLiteral("WristUDInput"));
        WristUDInput->setMinimum(-5);
        WristUDInput->setMaximum(5);

        gridLayout->addWidget(WristUDInput, 5, 1, 1, 1);

        LowerJointInput = new QSpinBox(gridLayoutWidget);
        LowerJointInput->setObjectName(QStringLiteral("LowerJointInput"));
        LowerJointInput->setMinimum(-5);
        LowerJointInput->setMaximum(5);

        gridLayout->addWidget(LowerJointInput, 2, 1, 1, 1);

        LowerJointLCD = new QLCDNumber(gridLayoutWidget);
        LowerJointLCD->setObjectName(QStringLiteral("LowerJointLCD"));
        LowerJointLCD->setFrameShape(QFrame::StyledPanel);
        LowerJointLCD->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(LowerJointLCD, 2, 3, 1, 1);

        UpperJointLCD = new QLCDNumber(gridLayoutWidget);
        UpperJointLCD->setObjectName(QStringLiteral("UpperJointLCD"));
        UpperJointLCD->setFrameShape(QFrame::StyledPanel);
        UpperJointLCD->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(UpperJointLCD, 3, 3, 1, 1);

        WristLRLCD = new QLCDNumber(gridLayoutWidget);
        WristLRLCD->setObjectName(QStringLiteral("WristLRLCD"));
        WristLRLCD->setFrameShape(QFrame::StyledPanel);
        WristLRLCD->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(WristLRLCD, 4, 3, 1, 1);

        WristUDLCD = new QLCDNumber(gridLayoutWidget);
        WristUDLCD->setObjectName(QStringLiteral("WristUDLCD"));
        WristUDLCD->setFrameShape(QFrame::StyledPanel);
        WristUDLCD->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(WristUDLCD, 5, 3, 1, 1);

        ArmProgressBar = new QProgressBar(Arm);
        ArmProgressBar->setObjectName(QStringLiteral("ArmProgressBar"));
        ArmProgressBar->setGeometry(QRect(10, 240, 561, 23));
        ArmProgressBar->setMaximum(100);
        ArmProgressBar->setValue(0);
        tabWidget->addTab(Arm, QString());
        Explorer = new QWidget();
        Explorer->setObjectName(QStringLiteral("Explorer"));
        gridLayoutWidget_2 = new QWidget(Explorer);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 20, 561, 131));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(gridLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        label_10 = new QLabel(gridLayoutWidget_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_10, 0, 1, 1, 1);

        label_11 = new QLabel(gridLayoutWidget_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_11, 2, 0, 1, 1);

        ExplorerExecute = new QPushButton(gridLayoutWidget_2);
        ExplorerExecute->setObjectName(QStringLiteral("ExplorerExecute"));

        gridLayout_2->addWidget(ExplorerExecute, 2, 2, 1, 1);

        label_14 = new QLabel(gridLayoutWidget_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_14, 3, 0, 1, 1);

        label_13 = new QLabel(gridLayoutWidget_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_13, 0, 3, 1, 1);

        ReelExecute = new QPushButton(gridLayoutWidget_2);
        ReelExecute->setObjectName(QStringLiteral("ReelExecute"));

        gridLayout_2->addWidget(ReelExecute, 3, 2, 1, 1);

        ReelLCD = new QLCDNumber(gridLayoutWidget_2);
        ReelLCD->setObjectName(QStringLiteral("ReelLCD"));
        ReelLCD->setFrameShape(QFrame::StyledPanel);
        ReelLCD->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_2->addWidget(ReelLCD, 3, 3, 1, 1);

        ExplorerInput = new QSpinBox(gridLayoutWidget_2);
        ExplorerInput->setObjectName(QStringLiteral("ExplorerInput"));
        ExplorerInput->setMinimum(-10);
        ExplorerInput->setMaximum(10);

        gridLayout_2->addWidget(ExplorerInput, 2, 1, 1, 1);

        ReelInput = new QSpinBox(gridLayoutWidget_2);
        ReelInput->setObjectName(QStringLiteral("ReelInput"));
        ReelInput->setMinimum(-10);
        ReelInput->setMaximum(10);

        gridLayout_2->addWidget(ReelInput, 3, 1, 1, 1);

        ExplorerLCD = new QLCDNumber(gridLayoutWidget_2);
        ExplorerLCD->setObjectName(QStringLiteral("ExplorerLCD"));
        ExplorerLCD->setFrameShape(QFrame::StyledPanel);
        ExplorerLCD->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_2->addWidget(ExplorerLCD, 2, 3, 1, 1);

        CoordinatedExecute = new QPushButton(gridLayoutWidget_2);
        CoordinatedExecute->setObjectName(QStringLiteral("CoordinatedExecute"));

        gridLayout_2->addWidget(CoordinatedExecute, 1, 2, 1, 1);

        label_12 = new QLabel(gridLayoutWidget_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_12, 1, 0, 1, 1);

        CoordinatedInput = new QSpinBox(gridLayoutWidget_2);
        CoordinatedInput->setObjectName(QStringLiteral("CoordinatedInput"));
        CoordinatedInput->setMinimum(-10);
        CoordinatedInput->setMaximum(10);

        gridLayout_2->addWidget(CoordinatedInput, 1, 1, 1, 1);

        ExplorerProgressBar = new QProgressBar(Explorer);
        ExplorerProgressBar->setObjectName(QStringLiteral("ExplorerProgressBar"));
        ExplorerProgressBar->setGeometry(QRect(10, 240, 561, 23));
        ExplorerProgressBar->setMaximum(10000);
        ExplorerProgressBar->setValue(0);
        tabWidget->addTab(Explorer, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 611, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        ResetArmPushButton->setText(QApplication::translate("MainWindow", "Reset Arm", Q_NULLPTR));
        ManualPushButton->setText(QApplication::translate("MainWindow", "Manual", Q_NULLPTR));
        QuitPushButton->setText(QApplication::translate("MainWindow", "Quit", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Home), QApplication::translate("MainWindow", "Home", Q_NULLPTR));
        BaseExecute->setText(QApplication::translate("MainWindow", "Execute", Q_NULLPTR));
        WristUDExecute->setText(QApplication::translate("MainWindow", "Execute", Q_NULLPTR));
        LowerJointExecute->setText(QApplication::translate("MainWindow", "Execute", Q_NULLPTR));
        WristLRExecute->setText(QApplication::translate("MainWindow", "Execute", Q_NULLPTR));
        UpperJointExecute->setText(QApplication::translate("MainWindow", "Execute", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Rotation In steps              (1.8\302\260 Per Step) Max = MAXVALUEPOSSIBLE", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Joint", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Current Position", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Base", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Lower Joint", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Wrist U/D", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Wrist L/R", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Upper Joint", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Arm), QApplication::translate("MainWindow", "Arm", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Device", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Distance (cm)", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Explorer", Q_NULLPTR));
        ExplorerExecute->setText(QApplication::translate("MainWindow", "Execute", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Reel", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Distance Traveled", Q_NULLPTR));
        ReelExecute->setText(QApplication::translate("MainWindow", "Execute", Q_NULLPTR));
        CoordinatedExecute->setText(QApplication::translate("MainWindow", "Execute", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Coordinated", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Explorer), QApplication::translate("MainWindow", "Explorer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
