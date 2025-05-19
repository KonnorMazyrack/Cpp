#include <iostream>
#include <vector>
using namespace std;
void inputVector(vector<int>& numbers, int total)
{
    for(int i = 1; i <= 10; i++)
    {
        cout <<"Enter a number you want to validate: ";
        cin >> numbers[i];
    }
    numbers.erase(numbers.begin());
}
void sortVector(vector<int>& numbers, int shift)
{
    for(int i = 0; i < (10-1); i++)
    {
        for(int j = 0; j < (10-i-1);j++)
        {
            if(numbers[j] > numbers[j+1])
            {
                swap(numbers[j], numbers[j+1]);
            }
        }
    }
}
void printVector(vector<int>& numbers)
{
    cout << "Sorted Vector: " << endl;
    for(auto elem: numbers)
        cout << elem << endl;
}
int main()
{
    int shift = 0;
    int total;
    cout << "Number of elements: ";
    cin >> total;
    total +=1;
    vector<int> myVector(total);
    inputVector(myVector,total);
    sortVector(myVector, shift);
    printVector(myVector);
    return 0;
}
