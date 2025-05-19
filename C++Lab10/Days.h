#ifndef DAYS_H
#define DAYS_H
#include <iostream>
#include <string.h>
using namespace std;

class Days
{

public:
    double hours;
    double days;
    Days(double hours);
    double getHours();
    double getDays();
    void setHours(double h);
    void setDays(double d);
    Days operator+(Days& d);
    Days operator-(Days& d);
    Days& operator++();
    Days operator++(int);
    Days& operator--();
    Days operator--(int);
};
#endif // DAYS_H
