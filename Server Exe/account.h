#ifndef ACCOUNT_H
#define ACCOUNT_H


class Account
{
    int AccountID;
    static int next_ID;
    float Balance;
public:
    Account();
    float checkBalance();
    void SetBalance(float balance);
    void Deposit(int balance);
    bool Winthdraw(int balance);
};

#endif // ACCOUNT_H
