#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<double> rainfall = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    double totalRain;
    double avgMonthly;
    int highI = 0;
    int lowI = 0;
    int pushCount = 12;
    for(int i = 0; i < rainfall.size(); ++i)
    {
        double temp;
        cout << "Enter rainfall for the month " << i + 1 << ": ";
        cin >> temp;
        while(temp < 0)
        {
            cout << "The number entered cannot be a negative number. please re-enter your number: ";
            cin >> temp;
        }
        for(int b = 0; b < pushCount; b++)
            rainfall.pop_back();
        for(int a = 0; a < pushCount; a++)
            rainfall.push_back(temp);
        totalRain += temp;
        pushCount -= 1;
    }
    avgMonthly = totalRain / 12;
    for(int i = 0; i < rainfall.size(); i++)
    {
        if(rainfall[i] > rainfall[highI])
            highI = i;
        if(rainfall[i] < rainfall[lowI])
            lowI = i;
    }


    cout << "Total rainfall over the year: " << totalRain << endl;
    cout << "Average rainfall over the year: " << avgMonthly << endl;
    cout << "The Month with the highest rainfall: Month " << highI+1 << " having " << rainfall[highI] << endl;
    cout << "The Month with the lowest rainfall: Month " << lowI+1 << " having " << rainfall[lowI] << endl;
    return 0;
}
