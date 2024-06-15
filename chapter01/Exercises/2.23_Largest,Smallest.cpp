#include<iostream> 
using namespace std; 

int main(){
    int num1{0},num2{0},num3{0},num4{0},num5{0},smallest{0},largest{0};
    cout<< "Enter 5 integers"<<endl;
    cin >> num1>>num2>>num3>>num4>>num5;
    smallest = num1;
    if(num2<smallest){
        smallest = num2;
    }
    if(num3<smallest){
        smallest =num3;
    }
    if(num4<smallest){
        smallest =num4;
    }
    if(num5<smallest){
        smallest =num5;
    }
    cout<<"Smallest is "<<smallest <<endl;
    ///////////////////////////
    largest = num5;
    if(num4>largest){
        largest = num2;
    }
    if(num3>largest){
        largest =num3;
    }
    if(num2>largest){
        largest =num4;
    }
    if(num1>largest){
        largest =num5;
    }
    cout<<"Largest is "<<largest <<endl;
}
    