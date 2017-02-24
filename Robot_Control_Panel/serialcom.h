#ifndef SERIALCOM_H
#define SERIALCOM_H

#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

class serialCom
{
    private:
        //Serial comm handler
        HANDLE hSerial;
        //Connection status
        bool connected;
        //Get various information about the connection
        COMSTAT status;
        //Keep track of last error
        DWORD errors;

    public:
        //Initialize Serial communication with the given COM port
        serialCom(char *portName);

        //Close the connection
        ~serialCom();

        //Writes data from a buffer through the Serial connection
        //return true on success.
        bool writeData(char *buffer, unsigned int nbChar);

        //Check if we are actually connected
        bool isConnected();
};

#endif // SERIALCOM_H
