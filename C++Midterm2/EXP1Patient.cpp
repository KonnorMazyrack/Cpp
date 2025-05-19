#include <iostream>
#include "Patient.h"

//constructor sets the patient's ID, then calls Person class
Patient::Patient(std::string n, std::string ID) : Person(n)
{
    patientID = ID;
}

//setters
void Patient::setPhyName(std::string phyN)
{
    phyName = phyN;
}
void Patient::setVisitFee(double f)
{
    visitFee = f;
}

//print function
void Patient::printPatientInfo()
{
    std::cout << "Patient ID: " << patientID << std::endl;
    std::cout << "Physician's name: " << phyName << std::endl;
    std::cout << "Visiting Fee: $" << visitFee << std::endl;
}
