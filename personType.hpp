#ifndef PERSONTYPE_HPP
#define PERSONTYPE_HPP

#include <iostream>
#include <string>
#include "Date.hpp"

class personType {
   public:
    void print() const;
    //Function to output the first name and last name
    //in the form firstName lastName.

    void setName(std::string first, std::string last);
    //Function to set firstName and lastName according
    //to the parameters.
    //Postcondition: firstName = first; lastName = last

    std::string getFirstName() const;
    //Function to return the first name.
    //Postcondition: The value of the data member firstName
    //               is returned.

    std::string getLastName() const;
    //Function to return the last name.
    //Postcondition: The value of the data member lastName
    //               is returned.

    personType(std::string first = "", std::string last = "", int age = 0);
    //constructor
    //Sets firstName and lastName according to the parameters.
    //The default values of the parameters are empty strings.
    //Postcondition: firstName = first; lastName = last

   protected:
    std::string firstName;  //variable to store the first name
    std::string lastName;   //variable to store the last name
    int age;
};

class doctorType: public personType
{
protected:
    std::string specialty;
    
public:
    doctorType(std::string first = "", std::string last = "", std::string sp = "", int a = 0); //constructor
    
    std::string getSpecialty() const;
    //Function to return the doctors specialty.

    void print() const;
    
};

class patientType: public personType
{
   protected:
    int patientID;
    std::string doctorName;
    Date DOB;
    Date admitDate;
    Date dischargeDate;
    
  public:
    patientType(std::string first = "", std::string last = "", int a = 0,
                int ID = 0, std::string dn = "");
    void setDOB(int m, int d, int y);
    void setadmitDate(int m, int d, int y);
    void setdischargeDate(int m, int d, int y);

    int getID() const;
    void print();
};

#endif
