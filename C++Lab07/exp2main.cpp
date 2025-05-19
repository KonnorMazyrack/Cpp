#include <iostream>
#include <string>
using namespace std;
string addSpaces(string input)
{
    string s1 = "";
    for(int i = 0; i < input.length();i++)
    {
        if(isupper(input[i])&& i>0)
        {
            s1 = s1 + " " + input[i];
        }else
        {
            s1 = s1 + input[i];
        }
    }
    return s1;
}
int main()
{
    string OGstring, newString;
    cout << "Enter a sentence you would like to add spaces to(use Uppercase Letters): \n";
    cin >> OGstring;
    newString = addSpaces(OGstring);
    cout << "Your new string is:" << endl;
    cout << newString;
}
