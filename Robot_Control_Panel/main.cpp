#include "mainwindow.h"
#include <QApplication>
#include <stdio.h>
#include <tchar.h>
#include <string>
#include <cstring>
#include <QDebug>
#include <windows.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    /*
    for(int i = 0; i < 1; i++)
    {
        try
        {
            serialCom* arm = new serialCom(test);
        }
        catch(int e)
        {
            qDebug() << "COM" << i << " Didnt work";
        }
    }
    */

    return a.exec();
}

