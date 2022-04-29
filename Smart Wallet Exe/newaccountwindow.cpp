#include "newaccountwindow.h"
#include "ui_newaccountwindow.h"
#include "mainwindow.h"


NewAccountWindow::NewAccountWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NewAccountWindow)
{
    ui->setupUi(this);
}

NewAccountWindow::~NewAccountWindow()
{
    delete ui;
}


void NewAccountWindow::on_SaveButton_clicked()
{

    QString name=ui->NameEdit->text();
    QString uname=ui->NewUsernameEdit->text();
    QString pass=ui->NewPasswordEdit->text();
    QString add=ui->AddressEdit->text();
    QString ages=ui->AgeEdit->text();
    QString natids= ui->NationalIDEdit->text();
    QString balances= ui->BalanceEdit->text();

    //qint64 age=static_cast<quint64>(ages.toULongLong());
    //qint64 nationalID=static_cast<quint64>(natids.toULongLong());
    //float balance=static_cast<float>(balances.toFloat());

    std::string data="client:"+name.toStdString()+","+uname.toStdString()+","+pass.toStdString()+","+add.toStdString()+","+
                       ages.toStdString()+","+natids.toStdString()+","+balances.toStdString();

    MainWindow::socket->write(data.c_str());
    MainWindow::socket->waitForBytesWritten(1000);
    hide();
    loginWindow= new LoginWindow();
    loginWindow->show();
}
