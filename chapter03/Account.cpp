#include<iostream> 
#include"Account.h"
using namespace std;
int main(){
    int depositeamount{0};
   Account account1{"Amr khaled",500};
   Account account2{"Mohamed khaled",-700};


   cout<<"account1: "<<account1.getName()<<" balance is $"<<account1.getBalance();
   cout<<"\naccount2: "<<account2.getName()<<" balance is $"<<account2.getBalance();

   cout<< "\n\nEnter deposite amount for account1: ";
   cin>> depositeamount;
   account1.deposite(depositeamount);
   cout<< "adding "<< depositeamount <<" to account1 balance\n\n";


   cout<<"account1: "<<account1.getName()<<" blance is $"<<account1.getBalance();
   cout<<"\naccount2: "<<account2.getName()<<" blance is $"<<account2.getBalance();

   cout<< "\n\nEnter deposite amount for account2: ";
   cin>> depositeamount;
   account2.deposite(depositeamount);
   cout<< "adding "<< depositeamount <<" to account2 balance\n\n";

   cout<<"account1: "<<account1.getName()<<" blance is $"<<account1.getBalance();
   cout<<"\naccount2: "<<account2.getName()<<" blance is $"<<account2.getBalance();
}