#include "withdraw.h"
#include "ui_withdraw.h"
#include "mainwindow.h"

Withdraw::Withdraw(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Withdraw)
{
    ui->setupUi(this);
}

Withdraw::~Withdraw()
{
    delete ui;
}

void Withdraw::on_ConfirmWithdrawButton_clicked()
{
    QString WithdrawnAmount= ui->WithdrawEdit->text();
    std::string data="withdraw:"+WithdrawnAmount.toStdString();
    MainWindow::socket->write(data.c_str());
    hide();
}
