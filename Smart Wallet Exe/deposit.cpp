#include "deposit.h"
#include "ui_deposit.h"
#include "mainwindow.h"
#include "QMessageBox"

Deposit::Deposit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Deposit)
{
    ui->setupUi(this);
}

Deposit::~Deposit()
{
    delete ui;
}


void Deposit::on_ConfirmDepositButton_clicked()
{
    QString DepositedAmount= ui->DepositEdit->text();
    std::string data="deposit:"+DepositedAmount.toStdString();
    MainWindow::socket->write(data.c_str());
    hide();
}
