#include <QtCore/QCoreApplication>
#include "myserver.h"
//#include <QApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    //QApplication a(argc, argv);
    MyServer Server;
    Server.StartServer();

    return a.exec();
}
