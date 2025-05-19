#include <iostream>
#include <string.h>
#include "Days.h"
int main() {
    Days d1(8.0);
    Days d2(12.0);

    std::cout << "d1: " << d1.getHours() << " hours, " << d1.getDays() << " days" << std::endl;
    std::cout << "d2: " << d2.getHours() << " hours, " << d2.getDays() << " days" << std::endl;

    double totalHours = d1.getHours() + d2.getHours();
    std::cout << "Total hours: " << totalHours << std::endl;

    double diffHours = d2.getHours() - d1.getHours();
    std::cout << "Difference in hours: " << diffHours << std::endl;

    ++d1;
    std::cout << "d1 after prefix increment: " << d1.getHours() << " hours, " << d1.getDays() << " days" << std::endl;

    d2++;
    std::cout << "d2 after postfix increment: " << d2.getHours() << " hours, " << d2.getDays() << " days" << std::endl;

    --d1;
    std::cout << "d1 after prefix decrement: " << d1.getHours() << " hours, " << d1.getDays() << " days" << std::endl;

    d2--;
    std::cout << "d2 after postfix decrement: " << d2.getHours() << " hours, " << d2.getDays() << " days" << std::endl;
    return 0;
}
