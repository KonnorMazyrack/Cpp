#include "Account.h"
#include <iostream>

int nextId = 1000;

Account::Account(std::string name, AccountType t, double b)
{
    id = nextId++;
    holderName = name;
    type = t;
    balance = b;
}

// getters
int Account::getID()
{
    return id;
}

std::string Account::getHolderName()
{
    return holderName;
}

AccountType Account::getType()
{
    return type;
}

double Account::getBalance()
{
    return balance;
}

// setters
void Account::setHolderName(std::string name)
{
    holderName = name;
}

void Account::setType(AccountType t)
{
    type = t;
}

void Account::setBalance(double b)
{
    balance = b;
}
