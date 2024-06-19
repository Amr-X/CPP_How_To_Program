#include <iostream>
#include <iomanip>
using namespace std;
int main (){
  double workhour{0};
  
  cout << "Enter Numbers of Hours Worked (-1 to Quit): ";
  cin >>workhour; // could be sential;
  while(workhour!=-1){
    double result = 2 + workhour / 10;
    cout << setprecision(2)<<fixed;
    cout<< "Accured Leave "<<result<<" Hours"<<endl;

    cout << "\nEnter Numbers of Hours Worked : ";
    cin >>workhour; // could be sential;
  }
  cout<<"Exit\n"<<endl;
   
} 