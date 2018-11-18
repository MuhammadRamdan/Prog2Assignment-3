#include "Client.h"

Client::Client() { }

Client::Client(string name, string phone, string address, BankAccount * account) {
    this->name = name;
    this->phone = phone;
    this->address = address;
    this->account = account;
}

Client::~Client() { }

//set client name 
void Client::setName(string name) {
    this->name = name;
}
//get client name
string Client::getName(){
    return this->name;
}
//set client phone number
void Client::setPhone(string phone){
    this->phone = phone;
}
//get client phone number
string Client::getPhone(){
    return phone;
}
//set client address
void Client::setAddress(string address){
    this->address = address;
}
//get client address
string Client::getAddress(){
    return this->address;
}
//set client address
void Client::setAccount(BankAccount* account){
    this->account = account;
}
//get client address
BankAccount* Client::getAccount(){
    return this->account;
}
