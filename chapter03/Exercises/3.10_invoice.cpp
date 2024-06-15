#include<iostream>
#include<string>
#include"3.10_invoice.h"
using namespace std;
int main(){
    Invoice invoice1("2345234","best item in the store ever",5,99);
    cout << invoice1.cal();
    cout << invoice1.getDescription();

}