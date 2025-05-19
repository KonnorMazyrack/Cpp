#include "Numbers.h"

string Numbers::lessthan20[20] = {"zero", "one", "two", "three", "four", "five",
"six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen",
"fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
string Numbers::tens[10] = {"", "", "twenty", "thirty", "fourty", "fifty", "sixty",
"seventy", "eighty", "ninety"};
string Numbers::hundred = "hundred";
string Numbers::thousand = "thousand";

Numbers::Numbers(int n)
{
    number = n;
}

void Numbers::print()
{
    string results = "";

    if(number >= 1000)
    {
        results += lessthan20[number / 1000] + " " + thousand + " ";
        number %= 1000;
    }
    if(number >= 100)
    {
        results += lessthan20[number / 100] + " " + hundred + " ";
        number %= 100;
    }
    if(number < 20)
    {
        results += lessthan20[number];
    }else
    {
        results += tens[number / 10] + " ";
        if(number % 10 != 0)
        {
            results += lessthan20[number % 10];
        }
    }
    cout << results << endl;
}
