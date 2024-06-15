#include<iostream> 
using namespace std; 

int main(){
    int num{0},remainder{0};

    cout<< "Is Odd Or Even ?" <<endl;
    cout<< "Enter a Number"<<endl;
    //cin >>  int num //error
    cin >> num;
    remainder = num%2;
    cout<<remainder<<endl;
    if (remainder==0){ //i was stuck here wow, remainder=0 wrong
        cout<<num<<"Is Even"<<endl;
    }else{
        cout<<num<<" Is Odd"<<endl;
    }
    
}