/********************************************************************************
** Form generated from reading UI file 'mainpage.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINPAGE_H
#define UI_MAINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainPage
{
public:
    QWidget *centralwidget;
    QPushButton *UndoButton;
    QPushButton *DepositButton;
    QLabel *label;
    QPushButton *WithdrawButton;
    QPushButton *RedoButton;
    QPushButton *CheckBalanceButton;
    QLabel *label_2;
    QPushButton *AccountInfoButton;
    QPushButton *TransHistoryButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainPage)
    {
        if (MainPage->objectName().isEmpty())
            MainPage->setObjectName(QStringLiteral("MainPage"));
        MainPage->setWindowModality(Qt::WindowModal);
        MainPage->resize(800, 255);
        centralwidget = new QWidget(MainPage);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        UndoButton = new QPushButton(centralwidget);
        UndoButton->setObjectName(QStringLiteral("UndoButton"));
        UndoButton->setGeometry(QRect(200, 160, 181, 25));
        DepositButton = new QPushButton(centralwidget);
        DepositButton->setObjectName(QStringLiteral("DepositButton"));
        DepositButton->setGeometry(QRect(10, 120, 111, 25));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(250, 10, 251, 31));
        WithdrawButton = new QPushButton(centralwidget);
        WithdrawButton->setObjectName(QStringLiteral("WithdrawButton"));
        WithdrawButton->setGeometry(QRect(140, 120, 111, 25));
        RedoButton = new QPushButton(centralwidget);
        RedoButton->setObjectName(QStringLiteral("RedoButton"));
        RedoButton->setGeometry(QRect(10, 160, 181, 25));
        CheckBalanceButton = new QPushButton(centralwidget);
        CheckBalanceButton->setObjectName(QStringLiteral("CheckBalanceButton"));
        CheckBalanceButton->setGeometry(QRect(270, 120, 111, 25));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 70, 251, 31));
        AccountInfoButton = new QPushButton(centralwidget);
        AccountInfoButton->setObjectName(QStringLiteral("AccountInfoButton"));
        AccountInfoButton->setGeometry(QRect(590, 120, 191, 25));
        TransHistoryButton = new QPushButton(centralwidget);
        TransHistoryButton->setObjectName(QStringLiteral("TransHistoryButton"));
        TransHistoryButton->setGeometry(QRect(590, 150, 191, 25));
        MainPage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainPage);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainPage->setMenuBar(menubar);
        statusbar = new QStatusBar(MainPage);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainPage->setStatusBar(statusbar);

        retranslateUi(MainPage);

        QMetaObject::connectSlotsByName(MainPage);
    } // setupUi

    void retranslateUi(QMainWindow *MainPage)
    {
        MainPage->setWindowTitle(QApplication::translate("MainPage", "Smart Wallet", 0));
        UndoButton->setText(QApplication::translate("MainPage", "Undo Last Transnaction", 0));
        DepositButton->setText(QApplication::translate("MainPage", "Deposit", 0));
        label->setText(QApplication::translate("MainPage", "Welcome to SmartWallet Application", 0));
        WithdrawButton->setText(QApplication::translate("MainPage", "Withdraw", 0));
        RedoButton->setText(QApplication::translate("MainPage", "Redo Last Transaction", 0));
        CheckBalanceButton->setText(QApplication::translate("MainPage", "Check Balance", 0));
        label_2->setText(QApplication::translate("MainPage", "Please choose the required process", 0));
        AccountInfoButton->setText(QApplication::translate("MainPage", "Print Account Info", 0));
        TransHistoryButton->setText(QApplication::translate("MainPage", "Print Transaction History", 0));
    } // retranslateUi

};

namespace Ui {
    class MainPage: public Ui_MainPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPAGE_H
