#include<iostream> 
using namespace std; 


int main(){
    /*
    FunctionOverloading
       Distinguish Functions by Thier Parameters.
    */

    // Both works now
    int square (int);
    double square (double);

    cout<< square(6)<<endl;
    cout<< square(5.5)<<endl;

    
}
int square (int x){
        return x*x;
    }

double square (double y){ //  
        return y*y;
    }
