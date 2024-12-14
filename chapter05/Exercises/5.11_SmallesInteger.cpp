#include <iostream>

int main() {
    std::cout << "Enter how many numbers to enter: ";
    int numCount{};
    std::cin >> numCount;

    if (numCount <= 0) {
        std::cout << "Please enter a positive number of values." << std::endl;
        return 1;  
    }

    int num{};
    std::cout << "Enter a number: ";
    std::cin >> num;
    int smallest = num;  


    for (int i = 1; i < numCount; ++i) {
        std::cout << "Enter a number: ";
        std::cin >> num;
        if (num < smallest) {
            smallest = num;  
        }
    }

    std::cout << "The smallest number is: " << smallest << std::endl;

    return 0;
}

