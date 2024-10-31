#include <iostream>
#include <array>
using namespace std;


const size_t arraySize{10};
double input;
void printArray(const array<double,arraySize> &_array);

int main() {

    array<double,arraySize> array = {0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5};
    cout <<"Printing Array: \n";
    printArray(array);

    for (size_t i = 1; i < arraySize; i+=2)
    {
        ++array[i];
    }
     cout <<"Printing Array after adding 1: \n";
    printArray(array);

    cout << "Enter 5 Double Values: \n";
    for (size_t i = 0; i < 5; i++)
    {   
        cin >> input;
        array[i]= input;
    }
     cout <<"Printing Array after New Input: \n";
    printArray(array);

    
}

void printArray(const array<double,arraySize> &_array){
    for(const auto &value:_array){
        cout << value <<" ";
    }   
    cout<<"\n"<<endl;
}