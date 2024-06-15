#include<iostream> 
using namespace std; 

int main(){
    int num1{0},num2{0};
    cout << "Enter Two Numbers"<< endl;
    cin >>num1>>num2;
    if (num1==num2){
        cout<<num1<<" is equal to "<<num2<<endl;
     }
    if(num1>num2){
        cout<<num1<<" is larger than "<<num2<<endl;
    
    }
    if(num1<num2){
        cout<<num2<<" is larger than "<<num1<<endl;
    }

     
}