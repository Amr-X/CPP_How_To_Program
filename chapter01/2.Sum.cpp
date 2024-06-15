#include<iostream>

int main(){
    int number1{0}, number2{0}, sum{0}; //initial value 0
    std::cout << "Enter your first number:";
    std::cin >>number1;//destuctive
    std::cout << "\nEnter your second number:";
    std::cin >>number2; //destuctive
    sum = number1 + number2; //nondestuctive
    std::cout << "Sum is " << sum << std::endl; //std::endl (end line) flush output buffer
}