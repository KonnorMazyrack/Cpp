#include <iostream>
#include <string>
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"

int main() {
    ProductionWorker pw("John Doe", 1234, "2021-03-04", 1, 15.00);

    std::cout << "DAY SHIFT:\n" << std::endl;
    std::cout << "Name: " << pw.get_name() << std::endl;
    std::cout << "Employee number: " << pw.get_number() << std::endl;
    std::cout << "Hire date: " << pw.get_hire_date() << std::endl;
    std::cout << "Shift: " << pw.get_shift() << std::endl;
    std::cout << "Hourly pay rate: " << pw.get_hourly_pay_rate() << std::endl;

    pw.set_hourly_pay_rate(18.00);
    pw.set_shift(2);

    std::cout << "\nShift: " << pw.get_shift() << std::endl;
    std::cout << "Updated Hourly pay rate: " << pw.get_hourly_pay_rate() << std::endl;

    ShiftSupervisor ss("Jane Smith", 5748, "2021-03-04", 50000.00, 5000.00);

    std::cout << "\nName: " << ss.get_name() << std::endl;
    std::cout << "Employee number: " << ss.get_number() << std::endl;
    std::cout << "Hire date: " << ss.get_hire_date() << std::endl;
    std::cout << "Annual salary: " << ss.get_annual_salary() << std::endl;
    std::cout << "Annual bonus: " << ss.get_annual_bonus() << std::endl;

    ss.set_annual_salary(60000.00);
    ss.set_annual_bonus(7000.00);

    std::cout << "Updated annual salary: " << ss.get_annual_salary() << std::endl;
    std::cout << "Updated annual bonus: " << ss.get_annual_bonus() << std::endl;

}
