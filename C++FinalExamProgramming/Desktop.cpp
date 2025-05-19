#include "Desktop.h"
#include "Computer.h"
#include <iostream>
#include <string>

Desktop::Desktop(std::string brand, std::string model, int storage, float speed, int numMon)
{
    Computer::computer(brand, model, storage, speed);
    numMonitors = numMon;
}

void Desktop::printDInfo()
{
    Computer::printInfo();
    std::cout << "Number of Monitors: " << numMonitors << std::endl;
}
