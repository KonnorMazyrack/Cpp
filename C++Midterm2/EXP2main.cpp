#include <iostream>
#include "Person.h"
#include "Patient.h"
using namespace std;

int main()
{
    //makes a patient object
    Patient A("Konnor", "15243");
    //resets the name
    A.setName("Konnor Mazyrack");
    //sets the Doctors name
    A.setPhyName("Dr. Will");
    //sets how much the fee will cost
    A.setVisitFee(-125);

    //lastly prints out all the information stores in the objects.
    A.printName();
    A.printPatientInfo();
    return 0;
}
