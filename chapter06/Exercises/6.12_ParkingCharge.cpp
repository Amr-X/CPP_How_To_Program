#include<iostream>
#include<string> 

const double MINIMUM_FEE = 20.00;
const double ADDITIONAL_FEE_PER_HOUR = 5.00;
const double MAXIMUM_FEE = 50.00;


double CalculateCharge(double hours){
 
    if (hours<= 3){
        return MINIMUM_FEE;
    }
    else {
        double hoursLeft = hours -3;
        double Total =MINIMUM_FEE + hoursLeft * ADDITIONAL_FEE_PER_HOUR;
        return (Total >= MAXIMUM_FEE)?MAXIMUM_FEE:Total;
    }

}
int main(){
    double hours1{0},hours2{0},hours3{0};

    std::cout << "Enter hours parked for customer 1"<< std::endl;
    std::cin >> hours1;

    std::cout << "Enter hours parked for customer 2"<< std::endl;
    std::cin >> hours2;

    std::cout << "Enter hours parked for customer 3"<< std::endl;
    std::cin >> hours3;


    double charge1{CalculateCharge(hours1)};
    double charge2{CalculateCharge(hours2)};
    double charge3{CalculateCharge(hours3)};

    double total_Charge = charge1 + charge2 + charge3;
    double total_Hours = hours1 + hours2 + hours3;
    //Imagine That We Print Here

    
}

