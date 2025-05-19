#include <iostream>
#include <stdexcept>
using namespace std;

template <typename T>
T abs(T val)
{
    //checks if negative if so flips the sign
    return (val < 0) ? -val: val;
}
int main()
{
    //assigns variables
    int a = -5;
    int b = -17;
    double c = -23.42;
    double d = -69.5;

    //prints the absolute value of each variable.
    cout << "The absolute value of " << a << " is: " << abs(a) << endl;
    cout << "The absolute value of " << b << " is: " << abs(b) << endl;
    cout << "The absolute value of " << c << " is: " << abs(c) << endl;
    cout << "The absolute value of " << d << " is: " << abs(d) << endl;

    return 0;
}
