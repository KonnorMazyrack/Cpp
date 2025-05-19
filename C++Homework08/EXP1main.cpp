#include <iostream>
#include "Numbers.h"
using namespace std;

int main()
{
    int n;
    cout << "Enter any number you'd like(in the range 0-9999): ";
    cin >> n;

    if(n < 0 || n > 9999)
    {
        cout << "ERROR: Number given is not in specified range 0-9999." << endl;
        return 1;
    }else
    {
        Numbers num(n);
        num.print();
        return 0;
    }
}
