#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>
#include <QTcpSocket>
#include <QDebug>
#include <unordered_map>
#include <client.h>

class MyThread : public QThread
{
    Q_OBJECT
public:
    explicit MyThread(std::unordered_map<int,Client>&mp1,std::unordered_map<QString,Client>&mp2 ,int ID, QObject *parent = 0);
    void run();
    std::unordered_map<int,Client>&client;
    std::unordered_map<QString,Client>&credentianls;

signals:
    void error(QTcpSocket::SocketError socketerror);

public slots:
    void readyRead();
    void disconnected();

public slots:

private:
    QTcpSocket *socket;
    int socketDescriptor;
};

#endif // MYTHREAD_H
