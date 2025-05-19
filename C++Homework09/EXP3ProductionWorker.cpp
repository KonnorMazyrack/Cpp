#include "ProductionWorker.h"
ProductionWorker::ProductionWorker(const std::string& name, int number,const std::string& hire_date,
int shift, double hourly_pay_rate)
    : Employee(name, number, hire_date), shift_(shift), hourly_pay_rate_(hourly_pay_rate) {}

int ProductionWorker::get_shift()
{
    return shift_;
}

double ProductionWorker::get_hourly_pay_rate()
{
    return hourly_pay_rate_;
}

void ProductionWorker::set_shift(int shift)
{
    shift_ = shift;
}

void ProductionWorker::set_hourly_pay_rate(double hourly_pay_rate)
{
    hourly_pay_rate_ = hourly_pay_rate;
}

void ProductionWorker::displayInfo(){
    Employee::displayInfo();

    std::cout<< "Shift: ";
    if(shift_ == 1)
    {
        std::cout << "Day" << std::endl;
    }else if(shift_ == 2){
        std::cout << "Night" << std::endl;
    }else{
        std::cout <<"Invalid Shift" << std::endl;
    }
    std::cout << "Hourly pay rate: " << hourly_pay_rate_ << std::endl;
}
