#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <Qfile>
#include <QThread>
#include <QTimer>

bool global_stall = false;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    BaseValue = 0;
    UpperJointValue = 0;
    LowerJointValue = 0;
    WristLRValue = 0;
    WristUDValue = 0;
    ExplorerValue = 0;
    ReelValue = 0;
    BaseUpperLimit = 90;
    BaseLowerLimit = -90;
    UpperJointUpperLimit = 90;
    UpperJointLowerLimit = -90;
    LowerJointUpperLimit = 90;
    LowerJointLowerLimit = -90;
    WristLRUpperLimit = 90;
    WristLRLowerLimit = -90;
    WristUDUpperLimit = 90;
    WristUDLowerLimit = -90;
    ExplorerLowerLimit = 0;
    ReelLowerLimit = 0;
    MaxStep = '5';
    Check = 0;
    RotationInputLimits += "Steps \n (1.8° Per Step)";
    RotationInputLimits += MaxStep;
    ui->setupUi(this);
    ui->label_2->setText(RotationInputLimits);
    timer = new QTimer(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_BaseExecute_clicked()
{
    if(ui->BaseInput->value() != 0)
    {
        Check = 0;
        Check = BaseValue + ui->BaseInput->value();
        if (Check>BaseUpperLimit || Check<BaseLowerLimit)
        {
            QMessageBox msgBox;
            msgBox.setText("That Value Exceeds Current Limits on Device.");
            msgBox.exec();
        }
        else
        {
            BaseValue = BaseValue + ui->BaseInput->value();
            ui->BaseLCD->display(BaseValue);
            ui->BaseInput->setValue(0);
        }
        Progress();
    }
}

void MainWindow::on_LowerJointExecute_clicked()
{
    if(ui->LowerJointInput->value() != 0)
    {
        Check = 0;
        Check = LowerJointValue + ui->LowerJointInput->value();
        if (Check>LowerJointUpperLimit || Check<LowerJointLowerLimit)
        {
            QMessageBox msgBox;
            msgBox.setText("That Value Exceeds Current Limits on Device.");
            msgBox.exec();
        }
        else
        {
            LowerJointValue = LowerJointValue + ui->LowerJointInput->value();
            ui->LowerJointLCD->display(LowerJointValue);
            ui->LowerJointInput->setValue(0);

            ui->ArmProgressBar->setValue(0);
            Progress();
        }
    }
}


void MainWindow::on_UpperJointExecute_clicked()
{
    if(ui->UpperJointInput->value() != 0)
    {
        Check = 0;
        Check = UpperJointValue + ui->UpperJointInput->value();
        if (Check>UpperJointUpperLimit || Check<UpperJointLowerLimit)
        {
            QMessageBox msgBox;
            msgBox.setText("That Value Exceeds Current Limits on Device.");
            msgBox.exec();
        }
        else
        {
            UpperJointValue = UpperJointValue + ui->UpperJointInput->value();
            ui->UpperJointLCD->display(UpperJointValue);
            ui->UpperJointInput->setValue(0);

            ui->ArmProgressBar->setValue(0);
            Progress();
        }
    }
}

void MainWindow::on_WristLRExecute_clicked()
{
    if(ui->WristLRInput->value() != 0)
    {
        Check = 0;
        Check = WristLRValue + ui->WristLRInput->value();
        if (Check>WristLRUpperLimit || Check<WristLRLowerLimit)
        {
            QMessageBox msgBox;
            msgBox.setText("That Value Exceeds Current Limits on Device.");
            msgBox.exec();
        }
        else
        {
            WristLRValue = WristLRValue + ui->WristLRInput->value();
            ui->WristLRLCD->display(WristLRValue);
            ui->WristLRInput->setValue(0);

            ui->ArmProgressBar->setValue(0);
            Progress();
        }
    }
}

void MainWindow::on_WristUDExecute_clicked()
{
    if(ui->WristUDInput->value() != 0)
    {
        Check = 0;
        Check = WristUDValue + ui->WristUDInput->value();
        if (Check>WristUDUpperLimit || Check<WristUDLowerLimit)
        {
            QMessageBox msgBox;
            msgBox.setText("That Value Exceeds Current Limits on Device.");
            msgBox.exec();
        }
        else
        {
            WristUDValue = WristUDValue + ui->WristUDInput->value();
            ui->WristUDLCD->display(WristUDValue);
            ui->WristUDInput->setValue(0);

            ui->ArmProgressBar->setValue(0);
            Progress();
        }
    }
}

void MainWindow::on_ExplorerExecute_clicked()
{
    if(ui->ExplorerInput->value() != 0)
    {
        Check = 0;
        Check = ExplorerValue + ui->ExplorerInput->value();
        if (Check<ExplorerLowerLimit)
        {
            QMessageBox msgBox;
            msgBox.setText("That Value Exceeds Current Limits on Device.");
            msgBox.exec();
        }
        else
        {
            ExplorerValue = ExplorerValue + ui->ExplorerInput->value();
            ui->ExplorerLCD->display(ExplorerValue);
            ui->ExplorerInput->setValue(0);

            ui->ExplorerProgressBar->setValue(0);
            Progress();
        }
    }
}

void MainWindow::on_ReelExecute_clicked()
{
    if(ui->ReelInput->value() != 0)
    {
        Check = ReelValue + ui->ReelInput->value();
        if (Check<ExplorerLowerLimit || Check<ExplorerValue)
        {
            QMessageBox msgBox;
            msgBox.setText("That Value Exceeds Current Limits on Device.");
            msgBox.exec();
        }
        else
        {
            Check = 0;
            ReelValue = ReelValue + ui->ReelInput->value();
            ui->ReelLCD->display(ReelValue);
            ui->ReelInput->setValue(0);

            ui->ExplorerProgressBar->setValue(0);
            Progress();
        }
    }
}

void MainWindow::on_CoordinatedExecute_clicked()
{
    if(ui->CoordinatedInput->value() != 0)
    {
        Check = 0;
        Check = ReelValue + ui->CoordinatedInput->value();
        if (Check<ReelLowerLimit)
        {
            QMessageBox msgBox;
            msgBox.setText("That Value Exceeds Current Limits on Device. Refer to Instructions on Home Page.");
            msgBox.exec();
        }
        else
        {
            ExplorerValue = ExplorerValue + ui->CoordinatedInput->value();
            ReelValue = ReelValue + ui->CoordinatedInput->value();
        }
        if (ui->CoordinatedInput->value()>0)
        {
        ui->ReelLCD->display(ReelValue);
        ui->ExplorerLCD->display(ExplorerValue);
        ui->CoordinatedInput->setValue(0);

        ui->ExplorerProgressBar->setValue(0);
        Timer = 0;
        for (Timer = 0; Timer <= 10000; Timer++)
            ui->ExplorerProgressBar->setValue(Timer);
        }
        else
        {
                ui->ExplorerLCD->display(ExplorerValue);
                ui->ReelLCD->display(ReelValue);
                ui->CoordinatedInput->setValue(0);

                ui->ExplorerProgressBar->setValue(0);
                Timer = 0;
                for (Timer = 0; Timer <= 10000; Timer++)
                    ui->ExplorerProgressBar->setValue(Timer);
        }
    }
}



void MainWindow::on_ResetArmPushButton_clicked()
{
    QMessageBox msgBox;
    msgBox.setWindowTitle("Please Confirm");
    msgBox.setText("Do you really want to reset arm to default position?");
    msgBox.setStandardButtons(QMessageBox::Yes);
    msgBox.addButton(QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::No);
    if(msgBox.exec() == QMessageBox::Yes){

        WristLRValue = 0;
        ui->WristLRLCD->display(WristLRValue);

        WristUDValue = 0;
        ui->WristUDLCD->display(WristUDValue);

        BaseValue = 0;
        ui->BaseLCD->display(BaseValue);

        LowerJointValue = 0;
        ui->LowerJointLCD->display(LowerJointValue);

        UpperJointValue = 0;
        ui->UpperJointLCD->display(UpperJointValue);



    }
}


void MainWindow::on_QuitPushButton_clicked()
{
    QMessageBox msgBox;
    msgBox.setWindowTitle("Please Confirm");
    msgBox.setText("Do you really want to exit?");
    msgBox.setStandardButtons(QMessageBox::Yes);
    msgBox.addButton(QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::No);
    if(msgBox.exec() == QMessageBox::Yes){
        close();
    } else {

    }
}

void MainWindow::on_ManualPushButton_clicked()
{
    QFile file("file///C:/Users/Austin/Documents/EE416_Code/D12_movement_controls/Control_Panel/Manual.txt");
}

void MainWindow::Stall()
{
    blockSignals(true);
    ui->BaseExecute->hide();
    ui->BaseInput->setEnabled(false);
    global_stall = true;

}
/*
void MainWindow::Progress()
{
    Check = 0;
    Timer = 0;

    ui->ArmProgressBar->setValue(0);
    connect(timer, SIGNAL(timeout()), this, SLOT(update()));

    for(Timer = 0; Timer < 100; Timer++)
    {
     timer->start(50);
    }

    disconnect(timer, SIGNAL(timeout()), this, SLOT(update()));
}
*/

void MainWindow::Progress()
{

    Stall();
    for(int i = 1; i < 101; i++)
    {
        ui->ArmProgressBar->setValue(i*1);
        QThread::sleep(.2);
    }
    unStall();
}

void MainWindow::unStall()
{
    blockSignals(false);
    ui->BaseExecute->show();
    ui->BaseInput->setEnabled(true);
    global_stall = false;
}

void MainWindow::update()
{
    Check = Check + 1;
    ui->ArmProgressBar->setValue(Check);

}
