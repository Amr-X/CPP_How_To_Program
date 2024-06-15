#include<iostream>
using namespace std;
int main(){
    int num1{0},num2{0},sum{0},product{0},quotient{0};
    cout <<"enter two numbers"<<endl;
    cin >> num1  >> num2;
    sum = num1 + num2;
    product = num1 * num2;
    quotient = num1 / num2; //lead to fraction not counting cuz its intger
    cout << "Sum:"<< sum << endl;
    cout << "product:"<< product << endl;
    cout << "quotient:"<< quotient << endl;
    return 0;
}