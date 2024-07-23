#include<iostream> 
using namespace std; 
//Global
int x{10};

int main(){
    /* Unary Scope 
     Access a Global Variable*/
    
  int x{11};
  cout << "Local variable is "<<x<<endl; //11
  cout << "Local variable is "<<::x<<endl; //10 Global
    
}

    
