/*
 *  Created by Edward Cruz on 03/13/2020
 *  Lab_07 --- doctorType.cpp
 * 
*/

#include "personType.hpp"
#include <iostream>

//********** CONSTRUCTOR **********************************
doctorType::doctorType(std::string first, std::string last, std::string sp, int a) {
    firstName = first;
    lastName = last;
    specialty = sp;
    age = a;
} //*******************************************************

//******** ACCESSOR ***************************************
std::string doctorType::getSpecialty() const {
    return specialty;
} //*******************************************************

void doctorType::print() const {
    std::cout << "\nDoctor's Name: " << firstName << " " << lastName;
    std::cout << "\nSpecialty    : " << specialty;
    std::cout << "\nAge          : " << age;
}