#include "balance.h"
#include "ui_balance.h"
#include "QMessageBox"
#include "mainwindow.h"

Balance::Balance(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Balance)
{
    ui->setupUi(this);
}

Balance::~Balance()
{
    delete ui;
}

void Balance::setText(QString text)
{
    ui->BalanceEdit->setReadOnly(true);
    ui->BalanceEdit->setText(text);
}
