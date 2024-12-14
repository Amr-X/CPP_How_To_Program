#include <iostream>

using namespace std;
int main() {
  // 1. Take 4 digit integer
  // 2. Separate them
  // 3. Reverse order
  // 4. Print with Spaces

  int d1, d2, d3, d4{0};
  int digit{0};
  cout << "Enter 4 Digit Number: " << endl;
  cin >> digit;
  d1 = digit % 10;
  d2 = digit % 100 / 10;
  d3 = digit / 100 % 10;
  d4 = digit / 1000;
  cout << d1 << "  " << d2 << "  " << d3 << "  " << d4 << endl;
  return 0;
}