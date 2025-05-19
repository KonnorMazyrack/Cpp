#ifndef TEMPERATURE_H
#define TEMPERATURE_H
#include <iostream>
using namespace std;

class Temperature
{
public:
    int temp;
    Temperature(int t);
    bool isEthylFreezing();
    bool isEthylBoiling();
    bool isOxygenFreezing();
    bool isOxygenBoiling();
    bool isWaterFreezing();
    bool isWaterBoiling();
};

#endif // TEMPERATURE_H
