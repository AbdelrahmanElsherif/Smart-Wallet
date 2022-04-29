/********************************************************************************
** Form generated from reading UI file 'withdraw.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WITHDRAW_H
#define UI_WITHDRAW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Withdraw
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *WithdrawEdit;
    QPushButton *ConfirmWithdrawButton;

    void setupUi(QDialog *Withdraw)
    {
        if (Withdraw->objectName().isEmpty())
            Withdraw->setObjectName(QStringLiteral("Withdraw"));
        Withdraw->resize(400, 121);
        layoutWidget = new QWidget(Withdraw);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 10, 275, 27));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        WithdrawEdit = new QLineEdit(layoutWidget);
        WithdrawEdit->setObjectName(QStringLiteral("WithdrawEdit"));

        horizontalLayout->addWidget(WithdrawEdit);

        ConfirmWithdrawButton = new QPushButton(Withdraw);
        ConfirmWithdrawButton->setObjectName(QStringLiteral("ConfirmWithdrawButton"));
        ConfirmWithdrawButton->setGeometry(QRect(290, 70, 89, 25));

        retranslateUi(Withdraw);

        QMetaObject::connectSlotsByName(Withdraw);
    } // setupUi

    void retranslateUi(QDialog *Withdraw)
    {
        Withdraw->setWindowTitle(QApplication::translate("Withdraw", "Dialog", 0));
        label->setText(QApplication::translate("Withdraw", "Withdraw Amount", 0));
        ConfirmWithdrawButton->setText(QApplication::translate("Withdraw", "Confirm", 0));
    } // retranslateUi

};

namespace Ui {
    class Withdraw: public Ui_Withdraw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WITHDRAW_H
