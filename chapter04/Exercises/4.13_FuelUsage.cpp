#include <iostream>
using namespace std;
int main (){
    int km{0},totalkm{0},liter{0},totalliter{0};
    cout <<"Enter Kilometers Driven (-1 to quit):  ";
    cin>>km;

    while(km!=-1)
    {
    
    totalkm+=km;
    cout <<"Enter liters Used: ";
    cin>> liter;
    totalliter+=liter;
    double kpl = static_cast<double>(km) / liter; // promotion liter to double
    cout<<"Kms per liter this trip: "<< kpl<<endl;
    double totalkpl=static_cast<double>(totalkm)/totalliter; // promotion totalliter to double
    cout << "Total Kms Per liter:  "<< totalkpl<<endl;
    cout <<"Enter Kilometers Driven (-1 to quit): ";
    cin>>km;
    }

    //will be here if km is sential value
    cout<<"Exit\n"<<endl;;
   
} 