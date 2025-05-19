#ifndef DECK_H
#define DECK_H

#include "card.h"
#include <vector>

class Deck {
public:
    Deck();
    void shuffle();
    Card& deal();
    int size() const;
private:
    std::vector<Card> cards_;
    int index_;
};

#endif // DECK_H
