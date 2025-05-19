#include <iostream>
#include <fstream>
#include <string>
#include "Computer.h"
#include "Desktop.h"
#include "Laptop.h"
using namespace std;

int main()
{
    ifstream fin;
    fin.open("Computers.txt");
    if(fin.fail())
    {
        cout << "ERROR: File failed to open." << endl;
        return -1;
    }
    string CType;
    string CBrand;
    string CModel;
    int CStorage;
    float CSpeed;
    int numMonitor = 1;
    bool touchscreen = false;
    string waste;
    while(true)
    {
        Computer* computer;
        fin >> CType;
        if(CType == "Desktop")
        {
            fin >> CBrand;
            fin >> CModel;
            fin >> CStorage;
            fin >> CSpeed;
            computer = new Desktop(CBrand, CModel, CStorage, CSpeed, numMonitor);

        }else if(CType == "Laptop")
        {
            fin >> CBrand;
            fin >> CModel;
            fin >> CStorage;
            fin >> CSpeed;
            computer = new Desktop(CBrand, CModel, CStorage, CSpeed, touchscreen);

        }else if(CType != "Desktop" || CType != "Laptop")
        {
            cout << "Unknown computer type." << endl;
        }
    }

    return 0;
}
