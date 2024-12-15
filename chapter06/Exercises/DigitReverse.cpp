#include <iostream>

int Reverse(int num){
  // 3456 -> 6543
  int reverse{0};
  for(int i{0};num > 0;i++){
    int digit = num % 10;
    reverse = reverse * 10 + digit;
    num = num / 10;
  }
  return reverse;
}

int main() {
    std::cout << Reverse(2345);
}