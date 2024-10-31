#include<iostream>
#include<string>
#include<array>
#include<sstream>
#include<stdexcept>
#include"Date.h"

using namespace std;

Date::Date(unsigned int dy,unsigned int mn, unsigned int yr)

{
    month=mn; //Look At The Order
    day=checkDay(dy);
    year=yr;

    if(mn < 1 || mn > Months){
        throw invalid_argument("Month Error: Month Within 0-12");
    }
    cout << "Date Object Constructor: "<<toString()<<endl;

}
string Date::toString()const{
    ostringstream output;
    output << day<< "/"<< month<< "/"<< year;
    return output.str();

}
unsigned int Date::checkDay (unsigned int cday) const{
        //Array with DaysInMonth
        static const array<int,Months+1>daysInMonth = {0,31,28,31,30,31,30,31,31,30,31,30,31};
        //If Day is right Based On The Month
        cout << "Checking day: " << cday << " for month: " << month << endl;
        if(cday > 0 && (cday <= daysInMonth[month])){
            return cday;
        }
        //Feb is 29
        if(cday == 29 && month == 2  && (year%4 == 0)){
            return cday;
        }
        throw invalid_argument("Day Error: Wrong Day in Month");
}

Date::~Date(){
    cout << "Date Object destructor: "<<toString()<<endl;
}