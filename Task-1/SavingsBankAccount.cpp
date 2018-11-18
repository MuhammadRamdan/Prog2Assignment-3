#include "SavingsBankAccount.h"

SavingsBankAccount::SavingsBankAccount() { minimumBalance = 0; }

//pass child parameters and parent constractor parameters
SavingsBankAccount::SavingsBankAccount(string accountId, string accountType, 
    double balance, double minimumBalance) : BankAccount(accountId, accountType, balance)
{
    this->minimumBalance = minimumBalance;
}

SavingsBankAccount::~SavingsBankAccount() { }
    
//set minimum balance 
void SavingsBankAccount::setMinimumBalance(double minimumBalance) {
    this->minimumBalance = minimumBalance;
}
//get minimum balance
double SavingsBankAccount::getMinimumBalance() {
    return this->minimumBalance;
}

// withdraw money from client account
int SavingsBankAccount::withdraw(double amount) {
    if(balance <= 0) {
        cout << "Your balance is zero." << endl; 
        return 0;
    }
    
    //check to prevent client withdraw less than minimum balance
    if(amount > (this->balance - this->minimumBalance)) {
        cout << "You cannot withdraw less than minimum balance." << endl; 
        return this->balance;
    }
        
    //call parent virtual function and no need to re-write the code again 
    return BankAccount::withdraw(amount);
}

// deposit money in client account
int SavingsBankAccount::deposit(double amount) {
    return BankAccount::deposit(amount);
}
