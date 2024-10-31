#include<iostream>
#include<string>
#include<stdexcept>
#include "time.h"

using namespace std;

void displayTime(const string& message,const Time& t){
    cout<<message<<
    "\nUniversal time: "<<t.toUniversalString()<<
    "\nStandard time: "<<t.toStandardString()<<"\n\n";

}

int main (){

    Time time1;
    Time time2{13,55,2};
    Time time3{12,54}; //second 0 by default

    cout << "Constructed with: \n\n";

    displayTime("time1:All arguments defaulted",time1);
    displayTime("time2:All arguments specified",time2);
    displayTime("time3:hour and minute specified;second defaulted",time3);

    //trying the throw mechanism we created
    try{
        Time time4{3,2,333};

    }
    catch(invalid_argument& ex){
        cout << "Exception while initializing time4: "<<ex.what()<<endl;
    }




}