#include<iostream> 
using namespace std; 

template <typename T> // T acts as a placeholder
//Function Creation
T maximum(T value1,T value2,T value3){
    T maximumValue{value1};
    if(value2>maximumValue){
        maximumValue= value2;
    }
    
    if(value3>maximumValue){
        maximumValue= value3;
    }
    return maximumValue;
}

int main(){
    /*
    FunctionTemplete
    A PlaceHolder for A DataType 
    */
   int int1 =50;
   int int2 =40;
   int int3 =55;

   double double1 = 50.3;
   double double2 = 50.5;
   double double3 = 50.8;

   cout << maximum(int1,int2,int3)<<endl;
   cout << maximum(double1,double2,double3)<<endl;

    
    
}