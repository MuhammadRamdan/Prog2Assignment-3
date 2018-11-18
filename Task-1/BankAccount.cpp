#include "BankAccount.h"

BankAccount::BankAccount() { this->balance = 0; }

BankAccount::BankAccount(string accountId, string accountType, double balance) {
    this->accountId = accountId; 
    this->accountType = accountType;
    this->balance = balance;
}

BankAccount::~BankAccount() { }

//set accountId
void BankAccount::setAccountId(string accountId) {
    this->accountId = accountId;
}
//get accountId
string BankAccount::getAccountId(){
    return this->accountId;
}    
//set accountType
void BankAccount::setAccountType(string accountType) {
    this->accountType = accountType;
}
//get accountType
string BankAccount::getAccountType() {
    return this->accountType;
}
//set balance
void BankAccount::setBalance(double balance) {
    this->balance = balance;
}
//get balance
double BankAccount::getBalance() {
    return this->balance;
}
// withdraw money from client account
int BankAccount::withdraw(double amount) {
    if(amount > balance) {
        cout << "" << endl;
        return 0;
    }    
    balance = balance - amount;
    return balance;
}
// deposit money in client account
int BankAccount::deposit(double amount) {
    balance = balance + amount;
    return balance;
}
