#ifndef DAYOFYEAR_H
#define DAYOFYEAR_H
#include <iostream>
using namespace std;

class DayOfYear
{
    private:
        static string MONTHS[];
        static int DAYS_PER_MONTH[];
    public:
        int day;
        DayOfYear(int numDay);
        void print();
};

#endif // DAYOFYEAR_H
