#include "Employee.h"

Employee::Employee(const std::string& name, int number, const std::string& hire_date)
    : name_(name), number_(number), hire_date_(hire_date) {}

const std::string& Employee::get_name()
{
    return name_;
}

int Employee::get_number()
{
    return number_;
}

const std::string& Employee::get_hire_date()
{
    return hire_date_;
}

void Employee::set_name(const std::string& name)
{
    name_ = name;
}

void Employee::set_number(int number)
{
    number_ = number;
}

void Employee::set_hire_date(const std::string& hire_date)
{
    hire_date_ = hire_date;
}

void Employee::displayInfo()
{
    std::cout << "Employee Name: " << name_ << std::endl;
    std::cout << "Employee Number: " << number_ << std::endl;
    std::cout << "Hire Date: " << hire_date_ << std::endl;
}
