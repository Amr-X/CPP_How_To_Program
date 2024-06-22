#include<iostream> 
using namespace std; 

int maximum(int,int,int); //function prototype Compiler ignores Parameter name
int maximum(int int1,int int2,int int3); //Or this

int main(){ // use prototype to tell main that maximum exists when called
    
    cout <<maximum(59,1,400)<<endl; //details are hidden

    
}


int maximum(int int1,int int2,int int3){ // should return only integer
    int maxvalue{int1};

    if (maxvalue<int2){
        maxvalue = int2;
    }

    if (maxvalue<int3){
    maxvalue = int3;

    }
    return maxvalue;//maxvalue is integer
}
