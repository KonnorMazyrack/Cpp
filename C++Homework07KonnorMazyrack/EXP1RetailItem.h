#ifndef RETAILITEM_H
#define RETAILITEM_H
#include <iostream>
#include <string.h>
using namespace std;

class RetailItem
{
private:
    string description;
    int unitsOnHand;
    double price;
public:
    RetailItem(string str, int unit, double pr);
    void describeItem();
};
#endif // RETAILITEM_H
