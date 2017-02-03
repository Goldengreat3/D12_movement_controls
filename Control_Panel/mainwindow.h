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
    void on_HomeButton_clicked();

    void on_ArmButton_clicked();

    void on_ExplorerReelButton_clicked();

    void on_pushButton_10_clicked();

    void on_actionAbout_triggered();

    void on_actionHelp_triggered();

    void on_actionExit_triggered();

    //void on_lcdNumber_overflow();

    //void on_pushButton_clicked();

    //void on_lineEdit_3_returnPressed();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
