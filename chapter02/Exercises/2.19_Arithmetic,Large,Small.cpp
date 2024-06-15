#include<iostream> 
using namespace std; 

int main(){
    int num1{0},num2{0},num3{0},sum{0},product{0},average{0},smallest{0},largest{0};
    cout << "Input three different integers: ";
    cin >> num1>> num2>>num3;
    sum= num1+num2+num3;
    cout<<"Sum is "<<sum<<endl;
    product= num1*num2*num3;
    cout<<"Product is "<<product<<endl;
    average= (num1+num2+num3)/3;
    cout<<"Average is "<<average<<endl;
    //////////////////////////////////////
    smallest = num1;
    if(num2<smallest){
        smallest = num2;
    }
    if(num3<smallest){
        smallest =num3;
    }
    cout<< "Smallest is "<< smallest<<endl;
    ///////////////////////////////////////
    largest = num1;
    if(num2>largest){
        smallest = num2;
    }
    if(num3>smallest){
        smallest =num3;
    }
    cout<< "Largest is "<< largest<<endl;
}