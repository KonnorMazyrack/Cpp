#include "RetailItem.h"

RetailItem::RetailItem(string str, int unit, double pr)
{
    description = str;
    unitsOnHand = unit;
    price = pr;
}
void RetailItem :: describeItem()
{
    cout << "Description: " << description << endl;
    cout << "Units available: " << unitsOnHand << endl;
    cout << "Price of the item: " << price << endl;
    cout << endl;
}
