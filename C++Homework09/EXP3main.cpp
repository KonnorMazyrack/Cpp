#include <iostream>
#include <string>
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include "TeamLeader.h"

int main() {
    ProductionWorker pw("John Doe", 1234, "2021-03-04", 1, 15.00);

    pw.displayInfo();

    pw.set_hourly_pay_rate(18.00);
    pw.set_shift(2);

    std::cout << "\nUpdated: " << std::endl;
    pw.displayInfo();

    ShiftSupervisor ss("Jane Smith", 5748, "2021-03-04", 50000.00, 5000.00);

    std::cout << "\n" << std::endl;
    ss.displayInfo();

    ss.set_annual_salary(60000.00);
    ss.set_annual_bonus(7000.00);

    std::cout << "Updated annual salary: " << ss.get_annual_salary() << std::endl;
    std::cout << "Updated annual bonus: " << ss.get_annual_bonus() << std::endl;

    TeamLeader tl(16.25, 2, 123, "Carl Azuz", "2020-13-04", 500.0, 20, 17);
    std::cout << "\n" << std::endl;
    tl.displayInfo();

}
