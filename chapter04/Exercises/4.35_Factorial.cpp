#include<iostream> 
using namespace std; 

int main(){
    int number{1},c{1};
    cout << "Enter Number (Positve only): ";
    cin >> number;
    if (number>=0){ // can be zero
    int factorial{1};
    while(c<number){
    factorial *=c; //1*1 *2*3*4*5 to n
    c++;
    }
    cout << "Number's Factorial (N!): " <<factorial<<endl;
    }else{
        cout << "Invalid\n"<<endl;
    }

}