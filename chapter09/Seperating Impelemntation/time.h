#include<iostream>
#include<string>

//Function Impelemntaion is hidden.
#ifndef TIME_H
#define TIME_H

class Time{

    public:

    //Constructor //if not provided is set to 0 by default.
    explicit Time(int=0,int=0,int=0);
    //Setters
    void setTime (int,int,int);
    void setHour (int);
    void setMinute (int);
    void setSecond (int);

    

    //Getters
    unsigned int getHour () const;
    unsigned int getMinute () const;
    unsigned int getSecond () const;

    std::string toUniversalString() const;
    std::string toStandardString() const;

    private:
        unsigned int hour{0};
        unsigned int minute{0};
        unsigned int second{0};


};
#endif