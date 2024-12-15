#include <iostream>
 
int exponentRecursive(int base, int exp){
  if(exp == 1){
    return base;
  }
  return base * exponentRecursive(base,exp -1);
}

int main() {
    std::cout << exponentRecursive(5,3);
}