#ifndef GAME_H
#define GAME_H

#include "deck.h"
#include <string>

class Game {
public:
    Game();
    void play();
private:
    Deck deck_;
    void guessFace();
    void guessSuit();
    void guessBoth();
};

#endif // GAME_H
