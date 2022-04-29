#include "mainpage.h"
#include "ui_mainpage.h"
#include "deposit.h"
#include "withdraw.h"
#include "mainwindow.h"

MainPage::MainPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainPage)
{
    ui->setupUi(this);
}

MainPage::~MainPage()
{
    delete ui;
}

void MainPage::on_DepositButton_clicked()
{
   Deposit deposit;
   deposit.setModal(true);
   deposit.exec();
}

void MainPage::on_WithdrawButton_clicked()
{
     Withdraw withdraw;
     withdraw.setModal(true);
     withdraw.exec();
}

void MainPage::on_CheckBalanceButton_clicked()
{
    MainWindow::socket->write("checkbalance:");
}

void MainPage::on_RedoButton_clicked()
{
    MainWindow::socket->write("redo:");
}

void MainPage::on_UndoButton_clicked()
{
    MainWindow::socket->write("undo:");
}

void MainPage::on_AccountInfoButton_clicked()
{
    MainWindow::socket->write("info:");
}

void MainPage::on_TransHistoryButton_clicked()
{
    MainWindow::socket->write("history:");
}
