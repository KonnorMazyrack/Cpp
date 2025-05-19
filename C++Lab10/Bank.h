#ifndef BANK_H
#define BANK_H

#include <string>

enum BankType {
    Commercial,
    Thrifts,
    CreditUnion
};

class Account;

class Bank {
public:
    Bank();
    Bank(std::string name, BankType type, std::string address);

    std::string getName() const;
    void setName(std::string name);

    BankType getType() const;
    void setType(BankType type);

    std::string getAddress() const;
    void setAddress(std::string address);

    friend void displayBankAndAccounts(Bank bank, Account accounts[], int count);

private:
    std::string m_name;
    BankType m_type;
    std::string m_address;
};

#endif
