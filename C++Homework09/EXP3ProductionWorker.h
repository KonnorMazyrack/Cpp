#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H
#include "Employee.h"

class ProductionWorker : public Employee
{
public:
    ProductionWorker(const std::string& name, int number,const std::string& hire_date,
        int shift, double hourly_pay_rate);

    int get_shift();
    double get_hourly_pay_rate();

    void set_shift(int shift);
    void set_hourly_pay_rate(double hourly_pay_rate);
    void displayInfo();
private:
    int shift_;
    double hourly_pay_rate_;
};

#endif // PRODUCTIONWORKER_H
