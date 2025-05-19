#include <iostream>
#include "Person.h"

//constructor to make an person
Person::Person(std::string n)
{
    name = n;
}

//sets the persons name
void Person::setName(std::string n)
{
    name = n;
}

//prints the persons name
void Person::printName()
{
    std::cout << "Name: " << name << std::endl;
}
