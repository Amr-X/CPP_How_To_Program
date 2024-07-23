#include<iostream> 
using namespace std; 

unsigned long factorial(unsigned long);

int main(){
    /*
    Recursion
        Funciton Calls itself
        Counsume Resources ALOT
    ex: Factorial(N)= N * Factorial(N-1)
    */
   cout << factorial(6)<<endl;
    
    
}
//Recursion Function 
unsigned long factorial(unsigned long N){ // Takes alot Of times
    //Base Case = Simple Case//
    if(N <= 1){ //0!=1 1!=1
        return 1;
    }

    return N * factorial(N-1);
}