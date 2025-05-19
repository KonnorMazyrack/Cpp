#ifndef PATIENT_H
#define PATIENT_H
#include "Person.h"

class Patient : public Person
{
    private:
        std::string patientID;
        std::string phyName;
        double visitFee;

    public:
        //constructor
        Patient(std::string n, std::string ID);

        //setters
        void setPhyName(std::string n);
        void setVisitFee(double f);

        //print info
        void printPatientInfo();

};


#endif // PATIENT_H
