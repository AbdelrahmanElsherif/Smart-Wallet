#ifndef CLIENT_H
#define CLIENT_H

#include <QString>
#include <account.h>
#include "stack"

enum Type{
    deposit,
    withdraw
};

struct Transaction{
    Type TransType;
    float TransAmount;
};

class Client
{
private:
QString Name,UserName,Password,Address;
qint64 Age,NationalID;
float Balance;
float InitialBalance;

public:
    Client();
    Client(QString name,QString userName,QString password,QString address,qint64 age,qint64 nationalID, float balance);
    Account account;
    std::stack<Transaction> TransStack;
    QString getUserName();
    QString getPassword();
    Account getAccount();
    QString getName();
    QString getAdd();
    QString getID();
    QString getAge();
    QString getInitBalance();
};

#endif // CLIENT_H
