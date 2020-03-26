//
//  Date.cpp
//  
//
//  Created by Bruce Gooch on 3/23/20.
// I started with code from http://www.cplusplus.com/forum/beginner/158359/

#include "Date.hpp"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

const string Date::monthName[] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

Date::Date()
{
    //Initialize variables.
    month = 0;
    day = 0;
    year = 0;
}
Date::Date(int My_Month, int My_Day, int My_Year)
{
    month = My_Month - 1;
    day = My_Day;
    year = My_Year;
}
void Date::PrintMonths()
{
    for(int i = 0; i < 12; i++)
    {
     cout << monthName[i] << endl;
    }
}
void Date::setDay(int d)
{
    day = d;
}
void Date::setMonth(int m)
{
    month = m - 1; //Subtract 1 because array is 0 indexed.
}
void Date::setYear(int y)
{
    year = y;
}
void Date::showDate1()
{
    cout << (month + 1) << "/" << day << "/" << year << endl;
}
void Date::showDate2()
{
    cout << monthName[month] << "  " << day << "  " << year << endl;
}
void Date::showDate3()
{
    cout << day << "  " << monthName[month] << "  " << year << endl;
}

void Date::getDate()
{
    int My_Month, My_Day, My_Year;
    bool Valid = true;
    
    while(Valid) // Set month
    {
        cout << "Please enter a month between 1 and 12. " << endl;
        cin >> My_Month;
    
        if ((My_Month < 1) || (My_Month > 12))
        {
            cout << "The month you entered is not between 1 and 12." << endl;
        }
        else {
            month = My_Month - 1;
            Valid = false;
        }
    }
    Valid = true;
    
    while(Valid) // Set day
    {
        cout << "Please enter a day (between 1 - 31) " << endl;
        cin >> My_Day;
        
        if(My_Month == 1 )
        {
            if ((My_Day < 1) || (My_Day > 28))
            {
                cout << "The day is invalid for the month of February" << endl;
            }
            else
            {
                day = My_Day;
                Valid = false;
            }
        }
        if(Valid && ((My_Month == 3) || (My_Month == 5) || (My_Month == 10)))
        {
            if ((My_Day < 1) || (My_Day > 30))
             {
                 cout << "The day is invalid for the month of " << monthName[month] << endl;
             }
             else
             {
                 day = My_Day;
                 Valid = false;
             }
         }
         if (Valid && ((My_Day < 1) || (My_Day > 31)))
         {
             cout << "The day is invalid for the month of " << monthName[month] << endl;
         }
         else
         {
             day = My_Day;
             Valid = false;
         }
        }
        Valid = true;
    
        while(Valid) // Set year
        {
            cout << "Please enter a year (between 1950 - 2042) " << endl;
            cin >> My_Year;
            if((My_Year < 1950) || (My_Year > 2042))
            {
                cout << "The year you entered is not between 1950 and 2042 " << monthName[month] << endl;
            }
            else
            {
                year = My_Year;
                Valid = false;
            }
        }
}


int main()
{
    Date newDate(3, 20, 1928); //Happy Birthday Fred Rogers!
   
    newDate.PrintMonths();
    cout << endl << endl;
    
    newDate.showDate1();
    newDate.showDate2();
    newDate.showDate3();
    cout << endl << endl;
    
    newDate.getDate();
    
    newDate.showDate1();
    newDate.showDate2();
    newDate.showDate3();

    return 0;
}

