#include "client.h"

Client::Client()
{

}

Client::Client(QString name,QString userName,QString password,QString address,qint64 age,qint64 nationalID, float balance):
Name(name),UserName(userName),Password(password),Address(address),Age(age),NationalID(nationalID),Balance(balance),InitialBalance(balance){account.SetBalance(balance);}

QString Client::getUserName(){
    return UserName;
}

QString Client::getPassword(){
    return Password;
}


Account Client::getAccount(){
    return account;
}

QString Client::getName(){
    return Name;
}
QString Client::getAdd(){
    return Address;
}
QString Client::getID(){
    return QString::number(NationalID);
};
QString Client::getAge(){
    return QString::number(Age);
};
QString Client::getInitBalance(){
    return QString::number(InitialBalance);
};
