/*
---x = y = z; -> x=(y=z)
---z *= (++y) + 5; -> z *=((++y) + 5)

---% With Negative Number
--(-3%3) == -1 || (3&-3)==1

---Side Effecting Function
!--(x + ++x) Based on How Compilers works (Clang - Gcc)

---Comma Operator (,) -> Usage in Loop Multiple Expressions.
--Separate Expressions (cout << (++x,++y))
--As Separator in Functions (Normal)

---std::cout << (x < 0) ? "negative" :"non-negative"; This Will Go Wrong (cout
<<false)


*/
#include <iostream>

int getValue() {
  std::cout << "Enter an integer: ";
  int x{};
  std::cin >> x;
  return x;
}

void printCalculation(int x, int y,
                      int z) //! Clang Passes Arguments from Left To Right
{
  std::cout << x + (y * z);
}

int main() {
  printCalculation(getValue(), getValue(),
                   getValue()); // this line is ambiguous
  return 0;
}