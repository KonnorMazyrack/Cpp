#include "Computer.h"
#include <iostream>
#include <string>

Computer::computer(std::string brand, std::string model, int storage, float speed)
{
    Brand = brand;
    Model = model;
    Storage = storage;
    CPUspeed = speed;
}

void Computer::printInfo()
{
    std::cout << "Brand: " << Brand << std::endl;
    std::cout << "Model: " << Model << std::endl;
    std::cout << "Storage Amount: " << Storage << std::endl;
    std::cout << "CPU speed: " << CPUspeed << std::endl;
}
