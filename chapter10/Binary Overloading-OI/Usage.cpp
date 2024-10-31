#include <iostream> 
#include"PhoneNumber.h"
using namespace std;

int main() {
    //What define those function? How they work?
    PhoneNumber phone;

    cout << "enter phone number in the form (555) 555-5555"<<endl;

    //operator>>(cin,phone)-->return value:same object(cin)
    // ex: cin >> phone >> phone2;
    cin >> phone; //How to cin >> object?

    cout << "\nThe phone number entered was :\n";

    cout << phone << endl; // How to cout << object?
}