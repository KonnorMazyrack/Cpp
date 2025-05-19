#include <iostream>
#include <string>
#include "ProductionWorker.h"

int main() {
    ProductionWorker pw("John Doe", 1234, "2022-01-01", 1, 15.00);
     std::cout << "DAY SHIFT:\n" << std::endl;
    std::cout << "Name: " << pw.get_name() << std::endl;
    std::cout << "Employee number: " << pw.get_number() << std::endl;
    std::cout << "Hire date: " << pw.get_hire_date() << std::endl;
    std::cout << "Shift: " << pw.get_shift() << std::endl;
    std::cout << "Hourly pay rate: " << pw.get_hourly_pay_rate() << std::endl;

    pw.set_hourly_pay_rate(18.00);
    pw.set_shift(2);
    std::cout << "\nNIGHT SHIFT:\n" << std::endl;
    std::cout << "Name: " << pw.get_name() << std::endl;
    std::cout << "Employee number: " << pw.get_number() << std::endl;
    std::cout << "Hire date: " << pw.get_hire_date() << std::endl;
    std::cout << "Shift: " << pw.get_shift() << std::endl;
    std::cout << "Hourly pay rate: " << pw.get_hourly_pay_rate() << std::endl;
}
