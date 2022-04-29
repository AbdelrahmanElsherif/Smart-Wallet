/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *LoginBox;
    QPushButton *LoginButton;
    QLabel *label;
    QLineEdit *PasswordEdit;
    QLabel *PasswordLabel;
    QLineEdit *UsernameEdit;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QStringLiteral("LoginWindow"));
        LoginWindow->resize(318, 256);
        centralwidget = new QWidget(LoginWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        LoginBox = new QGroupBox(centralwidget);
        LoginBox->setObjectName(QStringLiteral("LoginBox"));
        LoginBox->setGeometry(QRect(20, 10, 271, 191));
        LoginButton = new QPushButton(LoginBox);
        LoginButton->setObjectName(QStringLiteral("LoginButton"));
        LoginButton->setGeometry(QRect(10, 150, 71, 25));
        label = new QLabel(LoginBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(11, 31, 69, 17));
        PasswordEdit = new QLineEdit(LoginBox);
        PasswordEdit->setObjectName(QStringLiteral("PasswordEdit"));
        PasswordEdit->setGeometry(QRect(11, 108, 181, 25));
        PasswordLabel = new QLabel(LoginBox);
        PasswordLabel->setObjectName(QStringLiteral("PasswordLabel"));
        PasswordLabel->setGeometry(QRect(11, 85, 65, 17));
        UsernameEdit = new QLineEdit(LoginBox);
        UsernameEdit->setObjectName(QStringLiteral("UsernameEdit"));
        UsernameEdit->setGeometry(QRect(11, 54, 181, 25));
        LoginWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(LoginWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        LoginWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(LoginWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 318, 22));
        LoginWindow->setMenuBar(menubar);

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QApplication::translate("LoginWindow", "Smart Wallet", 0));
        LoginBox->setTitle(QApplication::translate("LoginWindow", "Please Enter Username and Password", 0));
        LoginButton->setText(QApplication::translate("LoginWindow", "Login", 0));
        label->setText(QApplication::translate("LoginWindow", "Username", 0));
        PasswordLabel->setText(QApplication::translate("LoginWindow", "Password", 0));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
