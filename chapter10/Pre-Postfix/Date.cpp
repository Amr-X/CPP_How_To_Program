#include<iostream>
#include<stdexcept>
#include"Date.h"
using namespace std;

const array<unsigned int, 13> Date::days{
   0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

static std::string monthName[13]{"", "January", "February",
      "March", "April", "May", "June", "July", "August",
      "September", "October", "November", "December"};

ostream& operator<<(ostream& output,const Date& dateObj){

    output<< monthName[dateObj.month]<<" "<< dateObj.day<<", "<<dateObj.year;
    return output;
}
Date::Date(unsigned int d,unsigned int m,unsigned int y){
    setDate(d,m,y);
}
void Date::setDate(unsigned int d,unsigned int m,unsigned int y){
        if(m>0 && m<=12){
        month = m;
    }else{
        throw invalid_argument("Month isn't within Range");
    }
    
    year = y;
    
    if(d<=days[month]){
        day = d;
    }else{
        throw invalid_argument("Day isn't within Range");
    }
}
Date& Date::operator++(){ //++d
    Increment();
    return *this;
}
Date Date::operator++(int){ //d++
    Date temp{*this}; //temp store old value before incrementing
    Increment();
    return temp;
}
Date& Date::operator+=(unsigned int daysToAdd){
    for (int i = 0; i < daysToAdd; i++) {
        Increment();
    }
    return *this;
}
bool Date::endOfMonth(unsigned int d){
    
  return d == days[month];
  
}
void Date::Increment(){
    if(!endOfMonth(day)){
        ++day;
    }else{
        if(month<12){
            day =1;
            ++month;

        }else{
            day =1;
            ++year;
            month =1;
        }
    }
}