#include <iostream>

 constexpr bool isFactor(int first, int second){
  return !(first % second);
}
int main() {
    std::cout << "Calling isFactor(5,5) -> "<< std::boolalpha << isFactor(5,5) << 
    '\n';
    std::cout << "Calling isFactor(11,5) -> "<< isFactor(11,5) << 
    '\n';
    std::cout << "Calling isFactor(15,3) -> "<< isFactor(15,5) << 
    '\n';    
}