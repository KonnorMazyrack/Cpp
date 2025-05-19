#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string>

class Employee {
public:
    Employee(const std::string& name, int number, const std::string& hire_date);

    const std::string& get_name();
    int get_number();
    const std::string& get_hire_date();

    void set_name(const std::string& name);
    void set_number(int number);
    void set_hire_date(const std::string& hire_date);

private:
    std::string name_;
    int number_;
    std::string hire_date_;
};

#endif // EMPLOYEE_H
