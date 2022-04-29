/********************************************************************************
** Form generated from reading UI file 'balance.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BALANCE_H
#define UI_BALANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Balance
{
public:
    QLabel *label;
    QTextEdit *BalanceEdit;

    void setupUi(QDialog *Balance)
    {
        if (Balance->objectName().isEmpty())
            Balance->setObjectName(QStringLiteral("Balance"));
        Balance->resize(379, 100);
        label = new QLabel(Balance);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 40, 171, 17));
        BalanceEdit = new QTextEdit(Balance);
        BalanceEdit->setObjectName(QStringLiteral("BalanceEdit"));
        BalanceEdit->setGeometry(QRect(200, 30, 161, 41));

        retranslateUi(Balance);

        QMetaObject::connectSlotsByName(Balance);
    } // setupUi

    void retranslateUi(QDialog *Balance)
    {
        Balance->setWindowTitle(QApplication::translate("Balance", "Dialog", 0));
        label->setText(QApplication::translate("Balance", "Your Current Balance Is", 0));
    } // retranslateUi

};

namespace Ui {
    class Balance: public Ui_Balance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BALANCE_H
