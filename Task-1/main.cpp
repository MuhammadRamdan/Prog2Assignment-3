/////////////
// Programming 2 - A3 - Task 1 - Problem 2: Problem is taken from the book: Programing-Abstractions-in-Cpp,
// The problem number is 8 on page 384
// Student IDs: 20150397, 20160206
/////////////
#include <iostream>
#include <BankApplication.h>
#include <Client.h>
#include <BankAccount.h>
#include <SavingsBankAccount.h>

int main(int argc, char **argv)
{
	BankApplication bankApp;
    
    //Test Case 1: add new 3 clients and accounts
    Client c1, c2, c3;      
    BankAccount* a1;
    BankAccount* a2;
    BankAccount* a3;
    //
    a1 = new BankAccount("FCI-001",BankAccountTypeBasic,3500);
    bankApp.addBankAccount(*a1);
    c1 = Client("Ahmed Jamal","010321332","Cairo - New City 326",a1);
    bankApp.addClient(c1);
    //
    a2 = new BankAccount("FCI-002",BankAccountTypeBasic,1500);
    bankApp.addBankAccount(*a2);
    c2 = Client("Mostafa Bader","010788484","Cairo - New Cairo 326",a2);
    bankApp.addClient(c2);
    //
    a3 = new SavingsBankAccount("FCI-003",BankAccountTypeSaving,7800, 1000);
    bankApp.addBankAccount(*a3);
    c3 = Client("Khaled Kareem","010465354","Giza - New Giza 123",a3);
    bankApp.addClient(c3);
    
    //Test Case2: withdraw 300 from client account 1 (after run it should be 3200)
    bankApp.getBankAccounts()[0].withdraw(300);
    bankApp.getClients()[0].getAccount()->withdraw(300);
    
    //Test Case3: deposite 600 from client account 2 (after run it should be 2100)
    bankApp.getBankAccounts()[1].deposit(600);
    bankApp.getClients()[1].getAccount()->deposit(600);
    
    //Test Case4: withdraw 7000 from client account 3 to make balance less than minimum balnce (it should give an error)
    bankApp.getBankAccounts()[2].withdraw(7000);
    bankApp.getClients()[2].getAccount()->withdraw(7000);
    
    //show the main menu and allow user to choose what to do
    bankApp.showMainMenuToUser();
    
	return 0;
}
