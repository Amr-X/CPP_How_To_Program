#include<iostream>
using namespace std;

void SquareReference(int& ref);
int SquareValue(int a);


int main (){
    int x{2};
    cout << x<<endl; //2
    cout << SquareValue(x)<<endl; //4
    cout << x<<endl; //2
    //////////////////////////////////////////////////////////////////////////
    int z{4};
    cout << z<<endl; //4
    SquareReference(z); //void
    cout << z; //16
}
int SquareValue(int a){ //a = x's value =2
    return a*a;
}
void SquareReference(int& ref){ //a =z's value and address = 2 =z
    ref = ref*ref; // == z =z*z
}