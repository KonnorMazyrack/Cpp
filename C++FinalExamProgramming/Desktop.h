#ifndef DESKTOP_H
#define DESKTOP_H
#include "Computer.h"

class Desktop : public Computer
{
    private:
        int numMonitors;
    public:
        Desktop(std::string brand, std::string model, int storage, float speed, int numMon);
        void printDInfo();
};

#endif // DESKTOP_H
