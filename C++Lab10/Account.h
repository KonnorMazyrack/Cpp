#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "Bank.h"
#include <string>

enum AccountType {
    Checking,
    Saving
};

class Account {
public:
    Account();
    Account(std::string holderName, AccountType type, double balance);

    int getID();
    std::string getHolderName();
    void setHolderName(std::string holderName);

    AccountType getType();
    void setType(AccountType type);

    double getBalance();
    void setBalance(double balance);

    friend void displayBankAndAccounts(Bank bank, Account accounts[], int count);

private:
    static int nextID;
    int id;
    std::string holderName;
    AccountType type;
    double balance;
};

#endif
