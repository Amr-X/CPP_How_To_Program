#include<iostream> 
#include<iomanip> 
using namespace std; 

int main(){
    double var = 123.02;
    cout<<"Without Percition: "<< var<<endl;
    cout <<"With Percition: "<< setprecision(30)<< var<<endl;

}