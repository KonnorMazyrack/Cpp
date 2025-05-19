#include <iostream>
using namespace std;

template<typename T>
T total(int n) {
    T sum = 0;
    T num;
    cout << "Enter " << n << " numbers of type " << typeid(T).name() << endl;
    for(int i = 0; i < n; i++)
    {
        cout << "number " << i + 1 << ": ";
        cin >> num;
        sum += num;
    }
    return sum;
}
int main()
{
    int numI = 5;
    int numD = 4;

    int totalI = total<int>(numI);
    double totalD = total<double>(numD);

    cout << "Total of " << numI << " integers: " << totalI << endl;
    cout << "Total of " << numD << " doubles: " << totalD << endl;

    return 0;
}
