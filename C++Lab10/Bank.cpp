#include "Bank.h"
#include "Account.h"
#include <iostream>

Bank::Bank() {}

Bank::Bank(std::string name, BankType type, std::string address)
    : m_name(name), m_type(type), m_address(address) {}


//getters
std::string Bank::getName() const {
    return m_name;
}

BankType Bank::getType() const {
    return m_type;
}

std::string Bank::getAddress() const {
    return m_address;
}

//setters
void Bank::setName(std::string name) {
    m_name = name;
}

void Bank::setType(BankType type) {
    m_type = type;
}

void Bank::setAddress(std::string address) {
    m_address = address;
}

