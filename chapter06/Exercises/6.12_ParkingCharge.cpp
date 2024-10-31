#include<iostream>
#include<string> 
using namespace std; 

double CalculateCharge(double hours);
int main(){
    double hours1{0},hours2{0},hours3{0},
    cust_Charge1{0},cust_Charge2{0},cust_Charge3{0};
   //Enter Hours for 3 Customers
    cout << "Enter hours parked for customer 1"<<endl;
    cin >> hours1;
    cout << "Enter hours parked for customer 2"<<endl;
    cin >> hours2;
    cout << "Enter hours parked for customer 3"<<endl;
    cin >> hours3;
   //Function Convert that to Dollars'
    cust_Charge1 = CalculateCharge(hours1);
    cust_Charge2 = CalculateCharge(hours2);
    cust_Charge3 = CalculateCharge(hours3);
   //Calculate Total
    double total_Charge = cust_Charge1 + cust_Charge2 + cust_Charge3;
    double total_Hours = hours1 + hours2 + hours3;ش
   //Print all info in a neat Table
    cout <<"Car\tHours\tCharge\n";



    
}
//Function That Convert 
double CalculateCharge(double hours){
    //Some Info We have 
    const double MINIMUM_FEE = 20.00;
    const double ADDITIONAL_FEE_PER_HOUR = 5.00;
    const double MAXIMUM_FEE = 50.00;
    if (hours<= 3){
        return MINIMUM_FEE;
    }
    else {
        double hoursLeft = hours -3;
        double Total =MINIMUM_FEE + hoursLeft * ADDITIONAL_FEE_PER_HOUR;
        return (Total >= MAXIMUM_FEE)?MAXIMUM_FEE:Total;
    }

}
