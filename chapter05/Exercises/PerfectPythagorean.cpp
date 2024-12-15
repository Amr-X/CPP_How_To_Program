#include <iostream>
#include <iomanip>
#include <cmath>
int main() {
  //Can Do Better.
    std::cout << "Pythagorean Triples: \n"
    << "a" << std::setw(9) << "b" << std::setw(9) << "c\n";
    double c{};
    for(int a{1};a <= 500;a++){
      for(int b{a};b <= 500;b++){ //b{a} Stop Redundancy
        c = std::sqrt(a * a + b* b);
        if(c == std::floor(c) && c <=500){ //Checks if it's an Integer.
          std::cout << a << std::setw(9) << b << std::setw(9) << c <<'\n';
        }
      }
    }
    std::cout << "Done!\n";
}