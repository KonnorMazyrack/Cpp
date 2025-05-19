#ifndef NUMBERS_H
#define NUMBERS_H
#include <iostream>
using namespace std;

class Numbers
{
    private:
        static string lessthan20[20];
        static string tens[10];
        static string hundred;
        static string thousand;
    public:
        int number;
        Numbers(int n);
        void print();
};

#endif // NUMBERS_H
