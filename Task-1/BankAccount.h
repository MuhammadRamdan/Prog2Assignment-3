#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <iostream>

using namespace std;

class BankAccount
{
public:
    BankAccount();
    BankAccount(string, string, double);
    
    ~BankAccount();
    
    //set accountId
    void setAccountId(string );
    //get accountId
    string getAccountId();    
    //set accountType
    void setAccountType(string );
    //get accountType
    string getAccountType();
    //set balance 
    void setBalance(double );
    //get balance
    double getBalance();    
    // withdraw money from client account
    virtual int withdraw(double );
    // deposit money in client account
    virtual int deposit(double );
    
protected:
    string accountId;
    string accountType;
    double balance;
    
};

#endif // BANKACCOUNT_H
