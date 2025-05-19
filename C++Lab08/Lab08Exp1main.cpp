#include <iostream>
#define N 12

using namespace std;
struct weather
{
    double rainfall;
    double lowT;
    double highT;
    double avgT;
};
int main()
{
    struct weather a[N];
    double avgR = 0;
    double avgTemp = 0;
    double maxT = 0;
    int maxM = -1;
    int minM = -1;
    double minT = 0;
    for(int i = 0; i < N; i++)
    {
        cout << "Enter rainfall, and low and high temp of month " << i+1 << endl;
        cin >> a[i].rainfall >> a[i].lowT >> a[i].highT;
        if(a[i].lowT < -100 || a[i].lowT > 140)
        {
            cout << "Input Validation: Only accepts temps between -100 and +140." << endl;
            cout << "Re-enter low temp: ";
            cin >> a[i].lowT;
        }else if(a[i].highT < -100 || a[i].highT > 140)
        {
            cout << "Input Validation: Only accepts temps between -100 and +140." << endl;
            cout << "Re-enter high temp: ";
            cin >> a[i].highT;
        }
        a[i].avgT = (a[i].lowT + a[i].highT)/2;
        avgR = avgR + a[i].rainfall;
        avgTemp =  avgTemp + a[i].avgT;
        if(a[i].lowT < minT)
        {
            minT = a[i].lowT;
            minM = i+1;
        }else if(a[i].highT > maxT)
        {
            maxT = a[i].highT;
            maxM = i+1;
        }
    }
    cout << "Average monthly rainfall: " << (avgR/12) << endl;
    cout << "The total rainfall for the year: " << avgR << endl;
    cout << "The highest temperature was in month " << maxM << " at a temp of: " << maxT << endl;
    cout << "The lowest temperature was in month " << minM << " at a temp of: " << minT << endl;
    cout << "The average of all the monthly average temperatures is: " << (avgTemp/12) << endl;
}
