#include<iostream> // notice no ;
using namespace std; // now it understand what is cout,cin,cerr

int main(){
    int number1{0},number2{0};
    cout << "Enter Two Numbers Please:";
    cin >> number1>> number2;// cascading chaining 
    if (number1==number2){
        cout << number1 << "=" << number2 << endl;
    }
    if (number1<number2){
        cout << number1 << "<" << number2 << endl;
    }
    if (number1>number2){
        cout << number1 << ">" << number2 << endl;
    }
    if (number1!=number2){
        cout << number1 << "!=" << number2 << endl;
    }
   

}