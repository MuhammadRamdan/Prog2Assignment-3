#ifndef BANKAPPLICATION_H
#define BANKAPPLICATION_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <BankAccount.h>
#include <Client.h>

const string BankAccountTypeBasic = "Basic";
const string BankAccountTypeSaving = "Saving";

class BankApplication
{
public:
    BankApplication();
    
    ~BankApplication();
    
    // add client to bank system by client object
    bool addClient(Client);
    // get client by client name
    Client getClientByName(string );    
    // get registered clients in the bank system
    vector<Client> getClients();
    
    // add bank account to bank system
    bool addBankAccount(BankAccount);
    // get account by account id
    BankAccount getAccountById(string);
    // get registered bank accounts in the bank system
    vector<BankAccount> getBankAccounts();
    
private:
    vector<Client> clients;
    vector<BankAccount> accounts;
};

#endif // BANKAPPLICATION_H
