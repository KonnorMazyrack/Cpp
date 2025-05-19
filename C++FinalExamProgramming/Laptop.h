#ifndef LAPTOP_H
#define LAPTOP_H
#include "Computer.h"

class Laptop : public Computer
{
    private:
        bool touchScreen;

    public:
        Laptop(std::string brand, std::string model, int storage, float speed, bool TS);
        void printLInfo();
};

#endif // LAPTOP_H
