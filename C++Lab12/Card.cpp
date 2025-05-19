#include "card.h"

Card::Card(const std::string& face, const std::string& suit)
    : face_(face), suit_(suit) {}

std::string Card::getFace() const {
    return face_;
}

std::string Card::getSuit() const {
    return suit_;
}
