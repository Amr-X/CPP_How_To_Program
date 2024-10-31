#include<iostream>

using namespace std;

int main(){

    int var{5};

    int* nullPtr{nullptr}; //Address = 0x0

     cout << var <<endl;
     cout << nullPtr << endl;
     //cout << *nullPtr << endl; //NullPtr ----> null //Called Dereference Pointer Asking for the value the address it hold.
     cout << endl;

    int* varPtr{&var};//Address Operator &var = var's Address in Memory.
    cout << var << endl;
    cout << varPtr << endl;
    cout << *varPtr << endl;
    cout <<endl;
    
    int array[5] = {1,2,3,4,5};

    int* arrayPtr = array; //implicit conversion  //int* arrayPtr = &array[0] //Points to the first element in array. 
     cout << array << endl;
     cout << arrayPtr << endl;
     cout << *arrayPtr << endl;  
     cout <<endl;  

    //int* ptr --NonConstant Pointer NonConstant Data
    //const int* ptr  --NonConstant Pointer Constant Data
    //int* const ptr --Const Pointer NonConstant Data
    //const int* const ptr --Const Pointer Constant Data

    //Size_of()

    

}