#include "deck.h"
#include <algorithm>
#include <random>
#include <ctime>

Deck::Deck() {
    std::vector<std::string> faces = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
    std::vector<std::string> suits = {"Clubs", "Diamonds", "Hearts", "Spades"};

    for (const auto& suit : suits) {
        for (const auto& face : faces) {
            cards_.push_back(Card(face, suit));
        }
    }

    index_ = 0;
}

void Deck::shuffle() {
    std::srand(time(nullptr));
    std::random_shuffle(cards_.begin(), cards_.end());
    index_ = 0;
}

Card& Deck::deal() {
    return cards_[index_++];
}

int Deck::size() const {
    return cards_.size() - index_;
}
