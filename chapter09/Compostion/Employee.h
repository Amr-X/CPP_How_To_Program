#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<iostream>
#include<string>
#include"Date.h"
class Employee{
public:
Employee(const std::string&,const std::string&,const Date&,const Date&);
std::string toString()const;
~Employee();

private:
std::string firstName;
std::string lastName;
Date birthDate;
Date hireDate;

};

#endif