/*
 *  Created by Edward Cruz on 03/13/2020
 *  Lab_07 --- billType.cpp
 * 
*/

#include "billType.hpp"
#include <iostream>

//********** CONSTRUCTOR **********************************
billType::billType(int ID, double pCost, double dCost, double rCost) {
    patientID = ID;
    pharmacyCost = pCost;
    doctorCost = dCost;
    roomCost = rCost;
} //*******************************************************

//***** MUTATORS ******************************************
void billType::setPharmacyCost(double x) {
    pharmacyCost = x;
}
void billType::setDoctorCost(double x) {
    doctorCost = x;
}
void billType::setRoomCost(double x) {
    roomCost = x;
} //*******************************************************

//******** ACCESSORS **************************************
double billType::getPharmacyCost() const {
    return pharmacyCost;
}

double billType::getDoctorCost() const {
    return doctorCost;
}

double billType::getRoomCost() const {
    return roomCost;
} //*******************************************************

//***** FUNCTIONS *****************************************
void billType::print() const {
    std::cout << "\n\n\nPatient ID   : " << patientID;
    std::cout << "\nPharmacy Cost: $" << pharmacyCost;
    std::cout << "\nDoctor Cost  : $" << doctorCost;
    std::cout << "\nRoom Cost    : $" << roomCost;
} //*******************************************************