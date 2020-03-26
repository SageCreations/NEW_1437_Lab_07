/*
 *  Created by Edward Cruz on 03/13/2020
 *  Lab_07 --- billType.hpp
 * 
*/

#ifndef BILLTYPE_HPP
#define BILLTYPE_HPP

#include "personType.hpp"

class billType: public patientType {
   public:
    billType(int ID = 0, double pCost = 0.0, double dCost = 0.0, double rCost = 0.0); //constructor/copy

    //mutators
    void setPharmacyCost(double);
    void setDoctorCost(double);
    void setRoomCost(double);

    //accessors
    double getPharmacyCost() const;
    double getDoctorCost() const;
    double getRoomCost() const;

    //display function
    void print() const;

   protected:
    double pharmacyCost;
    double doctorCost;
    double roomCost;
};

#endif