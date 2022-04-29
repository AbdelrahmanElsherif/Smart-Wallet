#include "account.h"

int Account::next_ID=0;

Account::Account()
{
AccountID = ++next_ID;
}
void Account::Deposit(int balance){
Balance+=balance;
};
bool Account::Winthdraw(int balance){
if(Balance>balance){Balance-=balance; return true;}
else return false;
};

float Account::checkBalance(){
    return Balance;
}

void Account::SetBalance(float balance){
    Balance=balance;
}
