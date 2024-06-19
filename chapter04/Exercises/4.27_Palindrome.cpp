#include<iostream> 
using namespace std; 
// i know its scuffed But it works!
int main(){
    int number{0},revnumber{0};
    cout << "Enter a 5-Digit Number: ";
    cin >> number;
    /////////////////////////////
    int d1 = number / 10000;
    int rem1 = number % 10000;         
    int d2 = rem1 / 1000;
    int rem2 = rem1 % 1000; 
    int d3 = rem2 / 100;
    int rem3 = rem2 % 100; 
    int d4 = rem3 / 10;
    int rem4 = rem3 % 10; 
    int d5 = rem4 ;
    //////////////////
    /*
    Better But not mine im Dumb
    int original = number;

    // Reverse the number
    while (number > 0) {
        int digit = number % 10;  // Extract the last digit
        revnumber = revnumber * 10 + digit;  // Build the reversed number
        number = number / 10;  // Remove the last digit
    }

    */
    revnumber = d5 * 10000 +d4 * 1000+d3 *100+d2 *10+d1;
    if (number==revnumber){
        cout <<"Palindrome\n"<<endl;
    }else{
        cout << "Not Palindrome\n"<<endl;
    }

}