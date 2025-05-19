#include <iostream>
using namespace std;

struct division{
    string name;
    int quarter;
    double sales;
    double totalAS;
    double AvgQS;
};
int main()
{
    struct division div[16];
    div[0].name = "East";
    div[0].quarter = 1;
    div[1].name = "East";
    div[1].quarter = 2;
    div[2].name = "East";
    div[2].quarter = 3;
    div[3].name = "East";
    div[3].quarter = 4;
    div[4].name = "West";
    div[4].quarter = 1;
    div[5].name = "West";
    div[5].quarter = 2;
    div[6].name = "West";
    div[6].quarter = 3;
    div[7].name = "West";
    div[7].quarter = 4;
    div[8].name = "North";
    div[8].quarter = 1;
    div[9].name = "North";
    div[9].quarter = 2;
    div[10].name = "North";
    div[10].quarter = 3;
    div[11].name = "North";
    div[11].quarter = 4;
    div[12].name = "South";
    div[12].quarter = 1;
    div[13].name = "South";
    div[13].quarter = 2;
    div[14].name = "South";
    div[14].quarter = 3;
    div[15].name = "South";
    div[15].quarter = 4;

    for(int j = 0; j < 16; j++)
    {
        if(j < 4)
        {
            cout << "Enter Quarterly Sale for East Division: ";
            cin >> div[j].sales;
            div[3].totalAS += div[j].sales;
        }else if(j < 8)
        {
            cout << "Enter Quarterly Sale for West Division: ";
            cin >> div[j].sales;
            div[7].totalAS += div[j].sales;
        }else if(j < 12)
        {
            cout << "Enter Quarterly Sale for North Division: ";
            cin >> div[j].sales;
            div[11].totalAS += div[j].sales;
        }else
        {
            cout << "Enter Quarterly Sale for South Division: ";
            cin >> div[j].sales;
            div[15].totalAS += div[j].sales;
        }

    }

    cout << "\n DIVISION  |  QUARTER  |  SALES" << endl;
    cout << "-----------------------------------" << endl;
    for(int i = 0; i < 16; i++)
    {
        cout << div[i].name <<"           "<<div[i].quarter<<"           "<<div[i].sales << endl;
        if(i == 3)
        {
            div[i].AvgQS = div[i].totalAS / 4;
            cout << " TOTAL ANNUAL  |  AVERAGE QUARTERLY" << endl;
            cout << "------------------------------------" << endl;
            cout << div[i].totalAS <<"             "<< div[i].AvgQS << endl;
            cout << " DIVISION  |  QUARTER  |  SALES" << endl;
            cout << "-----------------------------------" << endl;
        }else if(i == 7)
        {
            div[i].AvgQS = div[i].totalAS / 4;
            cout << " TOTAL ANNUAL  |  AVERAGE QUARTERLY" << endl;
            cout << "------------------------------------" << endl;
            cout << div[i].totalAS <<"             "<< div[i].AvgQS << endl;
            cout << " DIVISION  |  QUARTER  |  SALES" << endl;
            cout << "-----------------------------------" << endl;
        }else if(i == 11)
        {
            div[i].AvgQS = div[i].totalAS / 4;
            cout << " TOTAL ANNUAL  |  AVERAGE QUARTERLY" << endl;
            cout << "------------------------------------" << endl;
            cout << div[i].totalAS <<"             "<< div[i].AvgQS << endl;
            cout << " DIVISION  |  QUARTER  |  SALES" << endl;
            cout << "-----------------------------------" << endl;
        }else if(i == 15)
        {
            div[i].AvgQS = div[i].totalAS / 4;
            cout << " TOTAL ANNUAL  |  AVERAGE QUARTERLY" << endl;
            cout << "------------------------------------" << endl;
            cout << div[i].totalAS <<"             "<< div[i].AvgQS << endl;
            cout << "------------------------------------" << endl;
        }
    }
    return 0;
}
