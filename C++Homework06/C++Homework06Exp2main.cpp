#include <iostream>
using namespace std;

struct MovieData
{

    string title;
    string director;
    int year;
    int runningTime;
    double FYR;
    double productionCost;
};
void print(MovieData m)
{

    cout << "Movie Title: " << m.title << endl;
    cout << "Director: " << m.director << endl;
    cout << "Year it was released: " << m.year << endl;
    cout << "Running Time: " << m.runningTime << " minutes" << endl;
    double total = m.FYR - m.productionCost;
    if(total > 0.0)
    {
        cout << "First Year Profit: " << total << " million" << endl << endl;
    }else
    {
        cout << "First Year Loss: " << total << " million" << endl << endl;
    }
}

int main()
{
    MovieData m1;
    m1.title = "Shazam!";
    m1.director = "David F. Sandberg";
    m1.year = 2019;
    m1.runningTime = 132;
    m1.productionCost = 125;
    m1.FYR = 336;

    MovieData m2;
    m2.title = "Shazam! Fury Of The Gods";
    m2.director = "David F. Sandberg";
    m2.year = 2023;
    m2.runningTime = 130;
    m2.productionCost = 110;
    m2.FYR = 462;

    print(m1);
    print(m2);
    return 0;
}
