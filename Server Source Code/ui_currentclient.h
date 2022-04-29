/********************************************************************************
** Form generated from reading UI file 'currentclient.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CURRENTCLIENT_H
#define UI_CURRENTCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_currentclient
{
public:
    QTextEdit *ClientInfoEdit;
    QLabel *ClientNameEdit;

    void setupUi(QDialog *currentclient)
    {
        if (currentclient->objectName().isEmpty())
            currentclient->setObjectName(QStringLiteral("currentclient"));
        currentclient->resize(400, 205);
        ClientInfoEdit = new QTextEdit(currentclient);
        ClientInfoEdit->setObjectName(QStringLiteral("ClientInfoEdit"));
        ClientInfoEdit->setGeometry(QRect(20, 40, 361, 151));
        ClientNameEdit = new QLabel(currentclient);
        ClientNameEdit->setObjectName(QStringLiteral("ClientNameEdit"));
        ClientNameEdit->setGeometry(QRect(140, 10, 131, 17));

        retranslateUi(currentclient);

        QMetaObject::connectSlotsByName(currentclient);
    } // setupUi

    void retranslateUi(QDialog *currentclient)
    {
        currentclient->setWindowTitle(QApplication::translate("currentclient", "Dialog", 0));
        ClientNameEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class currentclient: public Ui_currentclient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CURRENTCLIENT_H
