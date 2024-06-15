#include<iostream> 
#include"3.9_Withdraw.h"
using namespace std;
int main(){
    int depositeamount{0};
   Account account1{"Amr khaled",500};
account1.withdraw(400);// should work
cout << account1.getBalance();

account1.withdraw(600);// NO NO you can't
cout << account1.getBalance();

account1.withdraw(500);// 500-500 zero
cout << account1.getBalance();

}
