#ifndef DATE_H
#define DATE_H


#include<iostream>
#include<array>

class Date{
    friend std::ostream& operator<<(std::ostream&,const Date&);
    public:
        Date(unsigned int =1,unsigned int=1,unsigned int=1970);
        Date& operator++();//Prefix
        Date operator++(int);//Postfix - int(Dummy Value)-To Distinguish Between Operator++
        Date& operator+=(unsigned int);
        void setDate(unsigned int,unsigned int,unsigned int);
        bool endOfMonth(unsigned int);
    private:
        unsigned int year;
        unsigned int month;
        unsigned int day;

        static const std::array<unsigned int,13> days;
        static std::string monthName[13];
        //Helper Funcitons
        void Increment();
};
#endif