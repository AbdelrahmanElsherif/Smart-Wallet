/********************************************************************************
** Form generated from reading UI file 'newaccountwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWACCOUNTWINDOW_H
#define UI_NEWACCOUNTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
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

class Ui_NewAccountWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QPushButton *SaveButton;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *NameLabel;
    QLineEdit *NameEdit;
    QLabel *NewUsernameLabel;
    QLineEdit *NewUsernameEdit;
    QLabel *NewPasswordLabel;
    QLineEdit *NewPasswordEdit;
    QLabel *AgeLabel;
    QLineEdit *AgeEdit;
    QLabel *NatIDLabel;
    QLineEdit *NationalIDEdit;
    QLabel *AddressLabel;
    QLineEdit *AddressEdit;
    QLabel *BalanceLabel;
    QLineEdit *BalanceEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *NewAccountWindow)
    {
        if (NewAccountWindow->objectName().isEmpty())
            NewAccountWindow->setObjectName(QStringLiteral("NewAccountWindow"));
        NewAccountWindow->resize(477, 406);
        centralwidget = new QWidget(NewAccountWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 40, 391, 321));
        SaveButton = new QPushButton(groupBox);
        SaveButton->setObjectName(QStringLiteral("SaveButton"));
        SaveButton->setGeometry(QRect(280, 280, 89, 25));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 40, 361, 221));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        NameLabel = new QLabel(layoutWidget);
        NameLabel->setObjectName(QStringLiteral("NameLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, NameLabel);

        NameEdit = new QLineEdit(layoutWidget);
        NameEdit->setObjectName(QStringLiteral("NameEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, NameEdit);

        NewUsernameLabel = new QLabel(layoutWidget);
        NewUsernameLabel->setObjectName(QStringLiteral("NewUsernameLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, NewUsernameLabel);

        NewUsernameEdit = new QLineEdit(layoutWidget);
        NewUsernameEdit->setObjectName(QStringLiteral("NewUsernameEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, NewUsernameEdit);

        NewPasswordLabel = new QLabel(layoutWidget);
        NewPasswordLabel->setObjectName(QStringLiteral("NewPasswordLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, NewPasswordLabel);

        NewPasswordEdit = new QLineEdit(layoutWidget);
        NewPasswordEdit->setObjectName(QStringLiteral("NewPasswordEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, NewPasswordEdit);

        AgeLabel = new QLabel(layoutWidget);
        AgeLabel->setObjectName(QStringLiteral("AgeLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, AgeLabel);

        AgeEdit = new QLineEdit(layoutWidget);
        AgeEdit->setObjectName(QStringLiteral("AgeEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, AgeEdit);

        NatIDLabel = new QLabel(layoutWidget);
        NatIDLabel->setObjectName(QStringLiteral("NatIDLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, NatIDLabel);

        NationalIDEdit = new QLineEdit(layoutWidget);
        NationalIDEdit->setObjectName(QStringLiteral("NationalIDEdit"));

        formLayout->setWidget(4, QFormLayout::FieldRole, NationalIDEdit);

        AddressLabel = new QLabel(layoutWidget);
        AddressLabel->setObjectName(QStringLiteral("AddressLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, AddressLabel);

        AddressEdit = new QLineEdit(layoutWidget);
        AddressEdit->setObjectName(QStringLiteral("AddressEdit"));

        formLayout->setWidget(5, QFormLayout::FieldRole, AddressEdit);

        BalanceLabel = new QLabel(layoutWidget);
        BalanceLabel->setObjectName(QStringLiteral("BalanceLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, BalanceLabel);

        BalanceEdit = new QLineEdit(layoutWidget);
        BalanceEdit->setObjectName(QStringLiteral("BalanceEdit"));

        formLayout->setWidget(6, QFormLayout::FieldRole, BalanceEdit);

        NewAccountWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(NewAccountWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 477, 22));
        NewAccountWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(NewAccountWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        NewAccountWindow->setStatusBar(statusbar);

        retranslateUi(NewAccountWindow);

        QMetaObject::connectSlotsByName(NewAccountWindow);
    } // setupUi

    void retranslateUi(QMainWindow *NewAccountWindow)
    {
        NewAccountWindow->setWindowTitle(QApplication::translate("NewAccountWindow", "Smart Wallet", 0));
        groupBox->setTitle(QApplication::translate("NewAccountWindow", "Please fill the required information: ", 0));
        SaveButton->setText(QApplication::translate("NewAccountWindow", "Save", 0));
        NameLabel->setText(QApplication::translate("NewAccountWindow", "Name", 0));
        NewUsernameLabel->setText(QApplication::translate("NewAccountWindow", "Username", 0));
        NewPasswordLabel->setText(QApplication::translate("NewAccountWindow", "Password", 0));
        AgeLabel->setText(QApplication::translate("NewAccountWindow", "Age", 0));
        NatIDLabel->setText(QApplication::translate("NewAccountWindow", "National ID", 0));
        AddressLabel->setText(QApplication::translate("NewAccountWindow", "Address", 0));
        AddressEdit->setText(QString());
        BalanceLabel->setText(QApplication::translate("NewAccountWindow", "Balance", 0));
    } // retranslateUi

};

namespace Ui {
    class NewAccountWindow: public Ui_NewAccountWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWACCOUNTWINDOW_H
