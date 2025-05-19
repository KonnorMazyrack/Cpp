#include <iostream>
#include "Temperature.h"
using namespace std;

int main()
{
    int gTemp;
    cout << "Enter the temperature you would like to check : ";
    cin >> gTemp;

    Temperature elem(gTemp);
    cout << "The Following elements with 1's will Freeze at the given temp: " << endl;
    cout << "Ethyl Alcohol: " << elem.isEthylFreezing() << endl;
    cout << "Oxygen: " << elem.isOxygenFreezing() << endl;
    cout << "Water: " << elem.isWaterFreezing() << endl << endl;
    cout << "The Following elements with 1's will Boil at the given temp: " << endl;
    cout << "Ethyl Alcohol: " << elem.isEthylBoiling() << endl;
    cout << "Oxygen: " << elem.isOxygenBoiling() << endl;
    cout << "Water: " << elem.isWaterBoiling() << endl;

    return 0;
}
