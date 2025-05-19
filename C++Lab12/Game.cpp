#include "game.h"
#include <iostream>

Game::Game() {}

void Game::play() {
    std::cout << "Welcome to the Card Guessing Game!\n";

    while (true) {
        deck_.shuffle();

        std::cout << "Guess the card:\n"
                  << "a. Guess only the face value of the card.\n"
                  << "b. Guess only the suit of the card.\n"
                  << "c. Guess both the face value and suit of the card.\n"
                  << "Enter your choice (a, b, or c), or q to quit: ";
        std::string choice;
        std::cin >> choice;

        if (choice == "q") {
            break;
        } else if (choice == "a") {
            guessFace();
        } else if (choice == "b") {
            guessSuit();
        } else if (choice == "c") {
            guessBoth();
        } else {
            std::cout << "Invalid choice. Please try again.\n";
        }
    }
}

void Game::guessFace() {
    Card& card = deck_.deal();

    std::cout << "The card is a " << card.getSuit() << " of " << card.getFace() << ".\n";
    std::cout << "Guess the face value (Ace, 2, 3, 4, 5, 6, 7, 8, 9, 10, Jack, Queen, or King): ";
    std::string guess;
    std::cin >> guess;

    if (guess == card.getFace()) {
        std::cout << "Correct!\n";
    } else {
        std::cout << "Incorrect. The face value is " << card.getFace() << ".\n";
    }
}

void Game::guessSuit() {
    Card& card = deck_.deal();

    std::cout << "The card is a " << card.getFace() << " of " << card.getSuit() << ".\n";
    std::cout << "Guess the suit (Clubs, Diamonds, Hearts, or Spades): ";
    std::string guess;
    std::cin >> guess;

    if (guess == card.getSuit()) {
        std::cout << "Correct!\n";
    } else {
        std::cout << "Incorrect. The suit is " << card.getSuit() << ".\n";
    }
}

void Game::guessBoth() {
    Card& card = deck_.deal();

    std::cout << "Guess the card (face value and suit): ";
    std::string guessFace, guessSuit;
    std::cin >> guessFace >> guessSuit;

    if (guessFace == card.getFace() && guessSuit == card.getSuit()) {
        std::cout << "Correct!\n";
    } else {
        std::cout << "Incorrect. The card is a " << card.getSuit() << " of " << card.getFace() << ".\n";
    }
}
