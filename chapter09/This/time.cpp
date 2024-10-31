#include<iostream>
#include<iomanip>
#include<stdexcept>
#include<sstream>
#include "time.h"
using namespace std;

Time::Time(int hour , int minute , int second){
    setTime(hour,minute,second);
}

Time& Time::setTime(int h, int m, int s){
    setHour(h);
    setMinute(m);
    setSecond(s);
    return *this;
}

Time& Time::setHour(int h){
    if(h<24){
        hour = h;
    }else{
        throw invalid_argument("Hours Should be Within 0-23");
        
    }
    return *this;

}

Time& Time::setMinute(int m){
    if(m<59){
        minute = m;
    }else{
        throw invalid_argument("Minutes Should be Within 0-59");
        
    }
    return *this;
}

Time& Time::setSecond(int s){
    if(s<59){
        second = s;
    }else{
        throw invalid_argument("Seconds Should be Within 0-59");
        
    }
    return *this;
}

unsigned int Time::getHour () const{
    return hour;
}

unsigned int Time::getMinute () const{
    return minute;
}

unsigned int Time::getSecond () const{
    return second;
}

string Time::toUniversalString() const{
    std::ostringstream output;
    output <<setfill('0')<<setw(2)<<getHour()<<":"<<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond();
    return output.str();
}

string Time::toStandardString() const{
    std::ostringstream output;
    output <<setfill('0')<<((getHour()==0||getHour()==12)?12:(getHour()%12))<<":"<<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond()
    <<(getHour()<12 ? " AM":" PM"); //why here hour? not getHour?
    return output.str();
}