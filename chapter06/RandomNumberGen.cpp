#include<iostream> 
#include<iomanip> 
#include<cstdlib>
#include<ctime>
using namespace std; 

int main(){// why same output on everyrun? // found out you should use srand() seed random give it seed diffrent each time it works
            // best to give it the current time 
    srand(time(0)); //
    int timeint = time(0);
    cout << timeint;
    for (int i{1};i<=20;i++){
    cout << setw(10)<< (1+rand()%6);
    if (i % 5==0){ // 5 10 15 20
        cout << endl;
    }}
      
    
    
}