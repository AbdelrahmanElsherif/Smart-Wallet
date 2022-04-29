#ifndef MAINPAGE_H
#define MAINPAGE_H

#include <QMainWindow>

namespace Ui {
class MainPage;
}

class MainPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainPage(QWidget *parent = nullptr);
    ~MainPage();

private slots:
    void on_DepositButton_clicked();

    void on_WithdrawButton_clicked();

    void on_CheckBalanceButton_clicked();

    void on_RedoButton_clicked();

    void on_UndoButton_clicked();

    void on_AccountInfoButton_clicked();

    void on_TransHistoryButton_clicked();

private:
    Ui::MainPage *ui;
};

#endif // MAINPAGE_H
