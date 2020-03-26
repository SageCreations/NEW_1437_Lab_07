/*
 *  Created by Edward Cruz on 03/22/2020
 *  Lab_07 --- testerProgram.cpp
*/

#include "personType.hpp"
#include "billType.hpp"
#include <iostream>

int main() {
    doctorType doctor = doctorType("James", "Smith", "Surgery", 36);
    patientType patient = patientType("John", "Richard", 24, 10034, doctor.getFirstName()+" "+doctor.getLastName());
    billType bill = billType(patient.getID(), 400.00, 1200.00, 300.00);

    patient.setDOB(3, 5, 1999);
    patient.setadmitDate(1, 3, 2020);
    patient.setdischargeDate(2, 15, 2020);

    doctor.print();
    patient.print();
    bill.print();

    return 0;
}