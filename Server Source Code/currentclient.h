#ifndef CURRENTCLIENT_H
#define CURRENTCLIENT_H

#include <QDialog>

namespace Ui {
class currentclient;
}

class currentclient : public QDialog
{
    Q_OBJECT

public:
    explicit currentclient(QWidget *parent = nullptr);
    ~currentclient();
    void setClientName(QString str);
    void setClientInfo(QString str);

private:
    Ui::currentclient *ui;
};

#endif // CURRENTCLIENT_H
