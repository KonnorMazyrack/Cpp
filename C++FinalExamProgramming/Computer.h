#ifndef COMPUTER_H
#define COMPUTER_H
#include <iostream>
#include <string>


class Computer
{
    private:
        std::string Brand;
        std::string Model;
        int Storage;
        float CPUspeed;

    public:
        computer(std::string brand, std::string model, int storage, float speed);
        void printInfo();
};

#endif // COMPUTER_H
