#include "Days.h"

Days::Days(double h)
{
    hours = h;
    days = h / 8;
}
double Days::getHours()
{
    return hours;
}
double Days::getDays()
{
    return days;
}
void Days::setHours(double h)
{
    hours = hours;
    days = hours / 8;
}
void Days::setDays(double d)
{
    days = d;
    hours = d * 8;
}
Days Days::operator+(Days& d)
{
    return Days(hours + d.hours);
}
Days Days::operator-(Days& d)
{
    return Days(hours - d.hours);
}
Days& Days::operator++()
{
    hours++;
    days = hours /8;
    return *this;
}
Days Days::operator++(int)
{
    Days temp(*this);
    operator++();
    return temp;
}
Days& Days::operator--()
{
    hours--;
    days = hours /8;
    return *this;
}
Days Days::operator--(int)
{
    Days temp(*this);
    operator--();
    return temp;
}
