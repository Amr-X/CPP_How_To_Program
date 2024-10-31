#include<iostream>
#include<string>
#include<sstream>
#include"Date.h"
#include"Employee.h"
using namespace std;

Employee::Employee(const string& fn,const string& ln,const Date& bd,const Date& hd) //no copy constructor if it is REFERENCE.
:firstName{fn},
lastName{ln},
birthDate{bd}, //assigning object to object (could be dangerous) But now its not(copy constructor)
hireDate{hd}
{
    cout <<"Employee object constructor: "<<firstName <<" "<<lastName<<endl;
}
string Employee::toString()const{
    ostringstream output;
    output << lastName<<", "<<firstName<< "  Hired: "<<hireDate.toString()<<"  BirthDay: "<<birthDate.toString()
    <<endl;
    return output.str();
}
Employee::~Employee(){
    cout <<"Employee object destructor "<<lastName <<" "<<firstName<<endl;
}
