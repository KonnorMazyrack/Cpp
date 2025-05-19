#include <iostream>
#include <string>
using namespace std;
int mode(int *a, int n)
{
    int i,flag,b[100],j=0,k,mx=0,max_index = -1;
    for(i = 0;i<n;i++)
    {
        flag = 0;
        for(k = 0;k<j;k++)
        {
            if(a[i] == b[k])
                flag = 1;
        }
        if(flag == 0)
            b[j++]=a[i];
    }
    for(i = 0;i<j;i++)
    {
        int count = 0;
        for(k = 0;k<n;k++)
        {
            if(b[i]==a[k])
                count+=1;
        }
        if(count>mx)
        {
            mx = count;
            max_index = i;
        }
    }
    if(max_index == -1)
        return -1;
    else
        return b[max_index];
}
int main()
{
    int a[100], n;
    cout << "Enter the size of your array: ";
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cout << "Enter element: ";
        cin >> a[i];
    }
    int z = mode(a,10);
    cout << "mode: " << z << endl;
}
