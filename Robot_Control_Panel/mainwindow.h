#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_BaseExecute_clicked();

    void on_LowerJointExecute_clicked();

    void on_UpperJointExecute_clicked();

    void on_WristLRExecute_clicked();

    void on_WristUDExecute_clicked();

    void on_ExplorerExecute_clicked();

    void on_ReelExecute_clicked();

    void on_CoordinatedExecute_clicked();

    void on_ResetArmPushButton_clicked();

    void on_QuitPushButton_clicked();

    void on_ManualPushButton_clicked();

private:
    Ui::MainWindow *ui;
    double BaseValue;
    double LowerJointValue;
    double UpperJointValue;
    double WristLRValue;
    double WristUDValue;
    double BaseUpperLimit;
    double BaseLowerLimit;
    double UpperJointUpperLimit;
    double UpperJointLowerLimit;
    double LowerJointUpperLimit;
    double LowerJointLowerLimit;
    double WristLRUpperLimit;
    double WristLRLowerLimit;
    double WristUDUpperLimit;
    double WristUDLowerLimit;
    double Check;
    double ExplorerValue;
    double ReelValue;
    double ExplorerLowerLimit;
    double ReelLowerLimit;
    int Timer;
};

#endif // MAINWINDOW_H
