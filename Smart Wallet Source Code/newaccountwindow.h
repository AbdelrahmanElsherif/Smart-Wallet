#ifndef NEWACCOUNTWINDOW_H
#define NEWACCOUNTWINDOW_H

#include <QMainWindow>
#include "loginwindow.h"

namespace Ui {
class NewAccountWindow;
}

class NewAccountWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit NewAccountWindow(QWidget *parent = nullptr);
    ~NewAccountWindow();

private slots:

    void on_SaveButton_clicked();

private:
    Ui::NewAccountWindow *ui;
    LoginWindow *loginWindow;
};

#endif // NEWACCOUNTWINDOW_H
