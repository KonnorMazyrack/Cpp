#include "TeamLeader.h"
TeamLeader::TeamLeader(double payRate, int shift, int num,const std::string& name,const std::string& hireDate, double bonus, int reqHours, int attHours)
    : ProductionWorker(name, num, hireDate, shift, payRate) {
    monthlyBonus = bonus;
    reqTrainingHours = reqHours;
    attTrainingHours = attHours;
}

void TeamLeader::setMonthlyBonus(double bonus) {
    monthlyBonus = bonus;
}

double TeamLeader::getMonthlyBonus(){
    return monthlyBonus;
}

void TeamLeader::setReqTrainingHours(int hours) {
    reqTrainingHours = hours;
}

int TeamLeader::getReqTrainingHours(){
    return reqTrainingHours;
}

void TeamLeader::setAttTrainingHours(int hours) {
    attTrainingHours = hours;
}

int TeamLeader::getAttTrainingHours(){
    return attTrainingHours;
}

void TeamLeader::displayInfo(){
    std::cout << "\nTeam Leader Information:\n";
    ProductionWorker::displayInfo();
    std::cout << "Monthly Bonus: $" << monthlyBonus << std::endl;
    std::cout << "Required Training Hours: " << reqTrainingHours << std::endl;
    std::cout << "Attended Training Hours: " << attTrainingHours << std::endl;
}
