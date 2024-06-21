#include<iostream> 
using namespace std; 

int main(){
   int counter{1},factorial{1},counterend{15};
   double e{1};
   cout << "Press anything to calulate e (euler's number): ";
   int garbage;
   cin >> garbage;
   while (counter <= counterend ){ // increase counterend for more precise e valuedrfg
    factorial *= counter;
    e += (1/static_cast<double>(factorial));
    counter++; 
   } 
   cout << e<<endl;

}