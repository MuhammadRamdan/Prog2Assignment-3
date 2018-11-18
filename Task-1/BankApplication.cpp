#include "BankApplication.h"

BankApplication::BankApplication()
{
}

BankApplication::~BankApplication()
{
}

struct GetClientIndexByName
{
 GetClientIndexByName(std::string& s) : s_(s) {}
 bool operator()(Client& obj) const
 {   
   return obj.getName() == s_;
 }
 private: std::string& s_;
};

struct GetAccountIndexById
{
 GetAccountIndexById(std::string& s) : s_(s) {}
 bool operator()(BankAccount& obj) const
 {   
   return obj.getAccountId() == s_;
 }
 private: std::string& s_;
};

// add client to bank system by client object
bool BankApplication::addClient(Client newClient){
    this->clients.push_back(newClient);
}
// get client by client name
Client BankApplication::getClientByName(string clientName){
    int clientIndex = -1;
    // find index client in vector by client name
    std::vector<Client>::iterator it = std::find_if(this->clients.begin(), this->clients.end(), GetClientIndexByName(clientName));    
    if(it != this->clients.end()) { 
        clientIndex = std::distance(this->clients.begin(), it);
    }
    if(clientIndex == -1) {
        cout << "Client is not exist" << endl;
        return Client();
    } else {
        return this->clients[clientIndex];
    }
} 
// get registered clients in the bank system
vector<Client> BankApplication::getClients(){
    return this->clients;
}

// add bank account to bank system
bool BankApplication::addBankAccount(BankAccount newAccount){
    this->accounts.push_back(newAccount);
}
// get account by account id
BankAccount BankApplication::getAccountById(string accountId){
    int accountIndex = -1;
    // find index account in vector by acct id
    std::vector<BankAccount>::iterator it = std::find_if(this->accounts.begin(), this->accounts.end(), GetAccountIndexById(accountId));    
    if(it != this->accounts.end()) { 
        accountIndex = std::distance(this->accounts.begin(), it);
    }
    if(accountIndex == -1) {
        cout << "Account is not exist" << endl;
        return BankAccount();
    } else {
        return this->accounts[accountIndex];
    }
}
// get registered bank accounts in the bank system
vector<BankAccount> BankApplication::getBankAccounts(){
    return this->accounts;
}

