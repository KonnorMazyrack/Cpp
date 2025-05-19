#ifndef CARD_H
#define CARD_H

#include <string>

class Card {
public:
    Card(const std::string& face, const std::string& suit);
    std::string getFace() const;
    std::string getSuit() const;
private:
    std::string face_;
    std::string suit_;
};

#endif // CARD_H
