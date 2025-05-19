#include <iostream>
#include <string>
#include "Bank.h"
#include "Account.h"
using namespace std;

void displayBankDetails(Bank bank, Account accounts[], int numAccounts)
{
    cout << "Bank Name: " << bank.getName() << endl;
    if(bank.getType() == 0)
    {
        cout << "Bank Type: " << "Commercial" << endl;
    }else if(bank.getType() == 1)
    {
        cout << "Bank Type: " << "Thrifts" << endl;
    }else
    {
        cout << "Bank Type: " << "CreditUnion" << endl;
    }
    cout << "Bank Address: " << bank.getAddress() << endl << endl;

    cout << "Accounts:" << endl;
    for (int i = 0; i < numAccounts; i++) {
        cout << "Account ID: " << accounts[i].getID() << endl;
        cout << "Account Holder: " << accounts[i].getHolderName() << endl;
        if(accounts[i].getType() == 0)
        {
            cout << "Account Type: " << "Checking" << endl;
        }else
        {
            cout << "Account Type: " << "Saving" << endl;
        }
        cout << "Account Balance: $" << accounts[i].getBalance() << endl << endl;
    }
}


int main()
{
    Bank myBank("My Bank", BankType::Commercial, "123 Main St.");

    Account acc1("John Smith", Checking, 1000.0);
    Account acc2("Jane Doe", Saving, 5000.0);
    Account acc3("Bob Johnson", Checking, 2500.0);
    Account acc4("Sue Lee", Saving, 10000.0);
    Account acc5("Tom Thompson", Checking, 1500.0);

    Account accounts[] = { acc1, acc2, acc3, acc4, acc5 };

    displayBankDetails(myBank, accounts, 5);

    return 0;
}
