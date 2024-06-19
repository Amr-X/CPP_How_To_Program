#include<iostream> 
using namespace std; 
// i did it yes i stole the other idea but its ok
int main(){
    int bit{0},decimal{0};
    cout << "Enter a Binary Digit (1 or 0):";
    cin >> bit;
    int originalbit = bit;
    // if()// how to check if it is a binary digit?
    // oh i need logic operators Ok Maybe no now
    int c{1};
    while (bit >0){
        int digit = bit %10;
        decimal = decimal +digit*c;
        bit = bit /10;
        c*=2;
    }
    cout << "Binary: "<<originalbit<<endl;
    cout << "Decimal: "<<decimal<<endl;
}