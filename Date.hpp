//
//  Date.hpp
//  
//
//  Created by Bruce Gooch on 3/23/20.
//

#ifndef DATE_HPP
#define DATE_HPP

#include <string>


using namespace std;

class Date
{
private:
    int month, day, year;
    const static string monthName[];
public:
    //These are constructors
    Date();
    Date(int, int, int);
    //Destructor
    ~Date(){}
    //void do not return values
    void setDay(int);
    void setMonth(int);
    void setYear(int);
    void PrintMonths();
    void getDate(); //Prompt a user to enter a date.
    
    void showDate1();
    void showDate2();
    void showDate3();
};


#endif /* Date_hpp */
