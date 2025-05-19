#ifndef TEAMLEADER_H
#define TEAMLEADER_H
#include "ProductionWorker.h"

class TeamLeader : public ProductionWorker {
    private:
        double monthlyBonus;
        int reqTrainingHours;
        int attTrainingHours;
    public:
        TeamLeader();
        TeamLeader(double payRate, int shift, int num ,const std::string& name,const std::string& hireDate, double bonus, int reqHours, int attHours);
        void setMonthlyBonus(double bpnus);
        double getMonthlyBonus();
        void setReqTrainingHours(int hours);
        int getReqTrainingHours();
        void setAttTrainingHours(int hours);
        int getAttTrainingHours();
        void displayInfo();
};

#endif // TEAMLEADER_H
