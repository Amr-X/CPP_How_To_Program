#ifndef DATE_H
#define DATE_H

#include<iostream>
#include<string>

class Date{
static const unsigned int Months{12};

public:
Date(unsigned int = 1,unsigned int = 1, unsigned int =1970);
std::string toString() const;
~Date();


private:
    unsigned int day;
    unsigned int month;
    unsigned int year;

    //Helper Function No one has access to
    unsigned int checkDay (unsigned int )const;

};
#endif