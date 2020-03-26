  
/*
 *  Created by Edward Cruz on 03/13/2020
 *  Lab_07 --- patientType.cpp
*/

#include "personType.hpp"
#include <iostream>

//******** CONSTRUCTOR ************************************
patientType::patientType(std::string first, std::string last, int a, int ID, std::string dn) 
{
    firstName = first;
    lastName = last;
    age = a;
    patientID = ID;
    doctorName = dn;
} //*******************************************************

//**** MUTATORS *******************************************
void patientType::setDOB(int m, int d, int y) {
    DOB = Date(m, d, y);
}

void patientType::setadmitDate(int m, int d, int y) {
    admitDate = Date(m, d, y);
}

void patientType::setdischargeDate(int m, int d, int y) {
    dischargeDate = Date(m, d, y);
} //*******************************************************

//******** ACCESSORS **************************************
int patientType::getID() const {
    return patientID;
} //*******************************************************

//******* FUNCTIONS ***************************************
void patientType::print() {
    std::cout << "\n\n\nPatient ID     : " << patientID;
    std::cout << "\nPatients Name  : " << firstName << " " << lastName;
    std::cout << "\nAge            : " << age;
    std::cout << "\nDoctor's Name  : " << doctorName;
    std::cout << "\nDOB            : ";
    DOB.showDate1();
    std::cout << "\nDate of Admit  : ";
    admitDate.showDate1();
    std::cout << "\nDate of Release: ";
    dischargeDate.showDate1();
} //*******************************************************

