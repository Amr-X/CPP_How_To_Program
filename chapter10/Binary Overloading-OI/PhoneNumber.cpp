//No need to use here
//#include <iostream>
#include <iomanip>
#include"PhoneNumber.h"
using namespace std;
ostream& operator<<(ostream& output,const PhoneNumber& number){
    output << "Area code : "<<number.areaCode<<
    "\nExchange: "<<number.exchange<<
    "\nLine: " << number.line<<
    "\n(" << number.areaCode <<") " << number.exchange << "-" << number.line<<endl;
    return output; //enable cascading

}
istream& operator>>(istream& input,PhoneNumber& number){
    input.ignore();
    input>>setw(3)>>number.areaCode;
    input.ignore(2);
    input>>setw(3)>>number.exchange;
    input.ignore();
    input>>setw(4)>>number.line;
    return input; //enable cascading
}