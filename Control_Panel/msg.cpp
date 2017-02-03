#include "msg.h"
#include <QMessageBox>
Msg::Msg()
{
    QMessageBox msgBox;
    msgBox.setText("The document has been modified.");
    msgBox.exec();
}
