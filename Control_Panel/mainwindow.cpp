#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QString>
#include <QLCDNumber>
#include <Qframe>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    base_degree = 0;

    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_HomeButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_ArmButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_ExplorerReelButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_10_clicked()
{

}

void MainWindow::on_actionAbout_triggered()
{
        QMessageBox msgBox;
        msgBox.setText("D12 Control Panel for Annulus Arm and Explorer/Reel Coordination.");
        msgBox.exec();
}

void MainWindow::on_actionHelp_triggered()
{
    QMessageBox msgBox;
    msgBox.setText("Instructions");
    msgBox.setInformativeText("Only one input will be issued at a time, wait until completion for larger changes in position before issuing another command");

    msgBox.setDetailedText("Arm: The base and each joint of the arm take degrees as inputs, with zero being default rest position. The Deployment Panel is controlled by two actuators. They also take degree inputs. ");
    msgBox.exec();
}

void MainWindow::on_actionExit_triggered()
{
    close();
}


void MainWindow::on_ArmBaseAngleInput_returnPressed()
{
    base_degree = base_degree + ui->ArmBaseAngleInput->text().toDouble();
    ui->lcdNumber->display(base_degree);

    qDebug() << base_degree;
}
