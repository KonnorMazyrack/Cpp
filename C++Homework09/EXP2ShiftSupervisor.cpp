#include "ShiftSupervisor.h"

ShiftSupervisor::ShiftSupervisor(const std::string& name, int number, const std::string& hire_date,
    double annual_salary, double annual_bonus)
    : Employee(name, number, hire_date), annual_salary_(annual_salary), annual_bonus_(annual_bonus) {}

double ShiftSupervisor::get_annual_salary() const {
    return annual_salary_;
}

double ShiftSupervisor::get_annual_bonus() const {
    return annual_bonus_;
}

void ShiftSupervisor::set_annual_salary(double annual_salary) {
    annual_salary_ = annual_salary;
}

void ShiftSupervisor::set_annual_bonus(double annual_bonus) {
    annual_bonus_ = annual_bonus;
}
