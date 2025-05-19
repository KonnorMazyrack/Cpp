#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
    int yearModel;
    string make;
    int speed;
public:
    Car(int, string);
    int getModel();
    int getSpeed();
    string getMake();
    int accelerate();
    int brake();
};
Car::Car(int yearofModel, string madeBy)
{
    yearModel = yearofModel;
    make = madeBy;
    speed = 0;
}
int Car::getModel()
{
    return yearModel;
}
string Car::getMake()
{
    return make;
}
int Car::getSpeed()
{
    return speed;
}
int Car::accelerate()
{
    speed += 5;
    return speed;
}
int Car::brake()
{
    if(speed >= 5)
    {
        speed -=5;
        return speed;
    }
}
int main()
{
    Car first(2022, "Lexus LFA");

    for(int i = 1; i <= 5;i++)
    {
        first.accelerate();
        cout <<"speed after " << i << " accelerate call: " << first.getSpeed() << endl;
    }
    for(int j = 1; j<= 5;j++)
    {
        first.brake();
        cout <<"speed after " << j << " brake call: " << first.getSpeed() << endl;
    }
    return 0;
}
