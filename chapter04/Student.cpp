#include<iostream>
#include<string>
#include"Student.h" //its been a fuckin hour trying to solve this <Student.h> is should be "Student.h"
using namespace std;
int main (){
    Student account1{"Amr Khaled",99};
    Student account2{"Mohamed Khaled",70};
    cout<<account1.getName()<<"'s letter grede equivalent of "<<account1.getAverage()<<" is: "<<account1.getAverageLetter()<<endl;
    cout<<account2.getName()<<"'s letter grede equivalent of "<<account2.getAverage()<<" is: "<<account2.getAverageLetter()<<endl;

}