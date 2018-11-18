#ifndef SAVINGSBANKACCOUNT_H
#define SAVINGSBANKACCOUNT_H

#include <iostream>
#include <BankAccount.h>

using namespace std;

class SavingsBankAccount : public BankAccount
{
public:
    SavingsBankAccount();
    SavingsBankAccount(string, string, double, double);
    
    ~SavingsBankAccount();
    
    //set minimum balance 
    void setMinimumBalance(double minimumBalance);
    //get minimum balance
    double getMinimumBalance();    

    // withdraw money from client account
    int withdraw(double amount);
    // deposit money in client account
    int deposit(double amount);
    
protected:
    double minimumBalance;

};

#endif // SAVINGSBANKACCOUNT_H
