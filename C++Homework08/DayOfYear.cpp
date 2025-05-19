#include <iostream>
#include "DayOfYear.h"

string DayOfYear::MONTHS[] = {"January", "February", "March", "April", "May", "June",
"July", "August", "September", "October", "November", "December"};

int DayOfYear::DAYS_PER_MONTH[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

DayOfYear::DayOfYear(int numDay)
{
    day = numDay;
}

void DayOfYear::print()
{
    int dayCount = day;
    int month = 0;
    while(dayCount > DAYS_PER_MONTH[month])
    {
        dayCount -= DAYS_PER_MONTH[month];
        month++;
    }
    string monthName = MONTHS[month];
    int dayInMonth = dayCount;
    cout << monthName << " " << dayInMonth << endl;
}

