#include <iostream>

int getNumber() {
  std::cout << "Enter an integer: ";
  int num;
  std::cin >> num;
  return num;
}
bool printIsEven(int num) {
  if (num % 2 == 0) {
    std::cout << num << " is Even\n";
  } else {
    std::cout << num << " is Odd\n";
  }
}
int main() {
  int number{getNumber()};
  printIsEven(number);
}