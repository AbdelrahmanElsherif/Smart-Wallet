#include "currentclient.h"
#include "ui_currentclient.h"

currentclient::currentclient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::currentclient)
{
    ui->setupUi(this);
}

currentclient::~currentclient()
{
    delete ui;
}

void currentclient::setClientName(QString str){
    ui->ClientNameEdit->setText(str);
};
void currentclient::setClientInfo(QString str){
    ui->ClientInfoEdit->setText(str);
    ui->ClientInfoEdit->setReadOnly(true);
};
