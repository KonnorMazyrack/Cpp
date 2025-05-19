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
    try {
        //checks if f is a negative number
        if(f < 0)
        {
            throw std::runtime_error("ERROR: the visiting Fee cannot be Negative.");
        }
        //if not assigns it to visitFee
        visitFee = f;
    }
    catch (std::runtime_error& e)
    {
        //prints out the error if the number is negative
        std::cerr << e.what() << std::endl;
        throw;
    }
}

//print function
void Patient::printPatientInfo()
{
    std::cout << "Patient ID: " << patientID << std::endl;
    std::cout << "Physician's name: " << phyName << std::endl;
    std::cout << "Visiting Fee: $" << visitFee << std::endl;
}
