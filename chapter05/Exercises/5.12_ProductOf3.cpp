#include<iostream> 
using namespace std; 

int main(){
    int product{1};
    
    for (int counter{3};counter <=50;counter+=3)
    {
        product *= counter;
    }

    cout <<"Product of Muliples Of 3\n"
    << "From Range 3 to 50 is: "<<product<<endl;

}