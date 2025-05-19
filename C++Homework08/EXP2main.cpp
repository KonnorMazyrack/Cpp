#include <iostream>
#include "DayOfYear.h"
using namespace std;

int main()
{
    DayOfYear test1(2); // prints January 2
    test1.print();

    DayOfYear test2(32); // prints February 1
    test2.print();

    DayOfYear test3(73); // prints March 14
    test3.print();

    DayOfYear test4(365); // prints December 31
    test4.print();


    return 0;
}
