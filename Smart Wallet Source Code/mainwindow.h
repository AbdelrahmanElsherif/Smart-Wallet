#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include "newaccountwindow.h"
#include "loginwindow.h"
#include "mainpage.h"
#include <QObject>
#include <QtDebug>
#include <QTcpSocket>
#include <QAbstractSocket>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    static QTcpSocket *socket;
    //static LoginWindow *loginWindow;
    // static void HideLogin();
private slots:
    void on_NewClientButton_clicked();
    void on_LoginButton_clicked();

public slots:
    void connected();
    void disconnected();
    void readyRead();


private:
    Ui::MainWindow *ui;
    LoginWindow *loginWindow;
    NewAccountWindow *newAccountWindow;
    MainPage *mainPage;

};
#endif // MAINWINDOW_H
