#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "newaccountwindow.h"
#include "balance.h"
#include "qmessagebox.h"

QTcpSocket* MainWindow::socket= new QTcpSocket();
//LoginWindow* MainWindow::loginWindow= new LoginWindow();

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
     ,ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(socket,SIGNAL(connected()),this,SLOT(connected()));
    connect(socket,SIGNAL(disconnected()),this,SLOT(disconnected()));
    connect(socket,SIGNAL(readyRead()),this,SLOT(readyRead()));

    qDebug()<<"Connecting";
    socket->connectToHost("127.0.0.1",1234);
    if(!socket->waitForConnected(1000)){
        qDebug()<<"Server Not Running Error Connecting"<<socket->errorString();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_LoginButton_clicked()
{
    hide();
    loginWindow= new LoginWindow();
    loginWindow->show();
    //MainWindow::loginWindow->show();
}

void MainWindow::on_NewClientButton_clicked()
{
    hide();
    newAccountWindow =new NewAccountWindow(this);
    newAccountWindow->show();
}

void MainWindow::connected(){
qDebug()<<"Connected To Server";
}

void MainWindow::disconnected(){
qDebug()<<"Disconnected From Server";
}


void MainWindow::readyRead(){

QByteArray data=  socket->readAll();
qDebug()<< data;

// login succeed
if(data=="login successful"){
    hide();
    mainPage=new MainPage(this);
    mainPage->show();
    mainPage->setWindowModality(Qt::WindowModal);
}
else if(data=="username already taken"){QMessageBox::information(0, "Error", "Account Creation Failed Username Already Taken!",QMessageBox::Ok);}
else if(data=="please check username and password"){QMessageBox::information(0, "Error", "Please Check Username and Password",QMessageBox::Ok);}
else if(data=="withdraw failed"){QMessageBox::information(0, "Error", "Withdraw Failed",QMessageBox::Ok);}
else if(data=="redo failed"){QMessageBox::information(0, "Error", "Redo Transaction Failed",QMessageBox::Ok);}
else if(data=="undo failed"){QMessageBox::information(0, "Error", "Undo Transaction Failed",QMessageBox::Ok);}
else{
    std::string ReceivedData=data.toStdString();
    int pos = ReceivedData.find(":");
    std::string header=ReceivedData.substr(0,pos);
    if(header=="balance"){
        std::string currbalance= ReceivedData.substr(pos+1);
        Balance balance;
        balance.setText(QString::fromStdString(currbalance));
        balance.exec();
    }
}
}
