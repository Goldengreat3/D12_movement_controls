#include "mainwindow.h"
#include <QApplication>
#include "serialcom.cpp"
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

    char* test[10];
    test[0]= (char*)("COM0");
    test[1]= (char*)("COM1");
    test[2]= (char*)("COM2");
    test[3]= (char*)("COM3");
    test[4]= (char*)("COM4");
    test[5]= (char*)("COM5");
    test[6]= (char*)("COM6");
    test[7]= (char*)("COM7");
    test[8]= (char*)("COM8");
    test[9]= (char*)("COM9");

    for(int i = 0; i < 10; i++)
    {
        try
        {
            serialCom* arm = new serialCom(test[i]);
        }
        catch(int e)
        {
            qDebug() << "COM" << i << " Didnt work";
        }
    }

    return a.exec();
}

