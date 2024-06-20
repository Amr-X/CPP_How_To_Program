#include<iostream>
#include <iomanip> //to use setw();
#include"DollarAmount.h"
using namespace std;
int main (){
    DollarAmount d1{12345}; 
    DollarAmount d2{1576}; 
    
    cout << "After adding d2 ("<<d2.toString()<<") into d1 ("<<d1.toString()<<"), d1 = ";
    d1.add(d2);
    cout << d1.toString() << endl;
     cout << "After subtracting d2 ("<<d2.toString()<<") from d1 ("<<d1.toString()<<"), d1 = ";
    d1.subtract(d2);
    cout << d1.toString() << endl;

    cout << "\nEnter Integer interest rate and divisor. For example:\n"
         << "for 2.375%, enter: 2375 10000\n>";
         int rate{0},divisor{0};
         cin >> divisor>> rate;
//////////////////////////////////////////////////////////////////////
    DollarAmount balance{100000}; //1000$
    cout <<"\nInitial balance: "<< balance.toString()<<endl;
    cout <<"\nYear"<<setw(20)<< "Amount on deposit"<<endl;
    for (int year{1};year<=10;year++){
        balance.addInterest(rate,divisor); //add interest to amount
        cout <<setw(4)<<year<<setw(20)<<balance.toString()<<endl; // Print to screen
        // 10 times years

    }
    
    

}