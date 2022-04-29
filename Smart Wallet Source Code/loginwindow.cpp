#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "mainwindow.h"
#include <QString>

LoginWindow::LoginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
}


LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_LoginButton_clicked()
{
    QString username = ui->UsernameEdit->text();
    QString password= ui->PasswordEdit->text();
    std::string data= "login:" + username.toStdString() + "," + password.toStdString();
    MainWindow::socket->write(data.c_str());
    MainWindow::socket->waitForBytesWritten(1000);
}
