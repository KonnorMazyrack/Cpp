#ifndef SHIFTSUPERVISOR_H
#define SHIFTSUPERVISOR_H

#include "Employee.h"

class ShiftSupervisor : public Employee {
public:
    ShiftSupervisor(const std::string& name, int number, const std::string& hire_date,
        double annual_salary, double annual_bonus);

    double get_annual_salary() const;
    double get_annual_bonus() const;

    void set_annual_salary(double annual_salary);
    void set_annual_bonus(double annual_bonus);

private:
    double annual_salary_;
    double annual_bonus_;
};

#endif // SHIFTSUPERVISOR_H
