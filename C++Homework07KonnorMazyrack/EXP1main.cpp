#include <iostream>
#include <string.h>
#include "RetailItem.h"
using namespace std;

int main()
{
    RetailItem jacket("Jacket", 12, 59.95);
    RetailItem dJeans("Designer Jeans", 40, 34.95);
    RetailItem shirt("Shirt", 20, 24.95);

    jacket.describeItem();
    dJeans.describeItem();
    shirt.describeItem();
    return 0;
}
