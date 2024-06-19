#include <iostream>
using namespace std;
int main (){
  int accnum{0},begbalance{0},monthcharge{0},credit{0},creditlim{0};
  cout <<"Enter Account Number (-1 to quit): ";
  cin >> accnum;
  while (accnum!=-1){
     cout<<"Enter Beginning Balance: ";
     cin >> begbalance;
     cout<<"Enter Total Charges: ";
     cin>> monthcharge;
     cout<<"Enter Total Credits: ";
     cin >>credit;
     cout<<"Enter Credit limit : ";
     cin >> creditlim;
     int balance = begbalance + monthcharge - credit;
     cout << "New Balance is: "<<balance<< endl;
     if (balance > creditlim){
         cout<< "Account: "<<accnum<<endl;
         cout<< "Credit limit: "<<creditlim<<endl;
         cout<< "Balance: "<<balance<<endl;
         cout<< "Credit Limit Exceeded"<<endl;
     }
    cout <<"\nEnter Account Number (-1 to quit): ";
    cin >> accnum;

  }
  cout<< "Exit\n"<<endl;
   
} 