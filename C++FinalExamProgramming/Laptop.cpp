#include "Laptop.h"
#include "Computer.h"
#include <iostream>
#include <string>

Laptop::Laptop(std::string brand, std::string model, int storage, float speed, bool TS)
{
    Computer::computer(brand, model, storage, speed);
    touchScreen = TS;
}

void printLInfo()
{
    Computer::printInfo();
    std::cout << "Touchscreen: " << touchScreen << std::endl;
}

