#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>
#include <BankAccount.h>

using namespace std;

class Client
{
public:
    Client();
    Client(string , string , string , BankAccount*);
    
    ~Client();
    //set client name 
    void setName(string name);
    //get client name
    string getName();
    //set client phone number
    void setPhone(string phone);
    //get client phone number
    string getPhone();
    //set client address
    void setAddress(string address);
    //get client address
    string getAddress();
    //set client address
    void setAccount(BankAccount* account);
    //get client address
    BankAccount* getAccount();
    
private:
    string name;
    string phone;
    string address;
    BankAccount* account;
    
};
    
#endif // CLIENT_H
