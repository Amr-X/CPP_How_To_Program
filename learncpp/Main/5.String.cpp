/*
--Std::String are Powerful unlike C-style String
---Flexible Change its Size -
*--Take Additional Memory (Heap) at RunTime (OS Provide to it) But Slow, How?

--Std::cin stops at " ""\n""\t"
--Std::getline(std::cin,input) stops at "\n"     << CareFull
!--Use std::cin >> std::ws to ignore whitespace with getline

--Std::string_view -- I think it's like a Pointer Not Sure
---Have the value of What it is viewing (Can not change the value is it viewing)
---But Can Change what is it viewing
---Can't convert string_view to string unless Using Static_Cast (Forcefully
Converting)

---A C-style string literal and a std::string are always null-terminated.
---A std::string_view may or may not be null-terminated.

---C-style string literals exist for the entire
program, it is always okay to set a std::string_view to a C-style string
literal.
*/
#include <iostream>
#include <string>
#include <string_view>

void printSV(std::string_view str) // Read Only No Copy like (const &str)
{
  std::cout << str << '\n';
}
std::string_view getName(){}; // Object Created

int main() {
  std::string_view s{"Hello, world!"};
  printSV(s);

  // If You Want To Use Literals
  using namespace std::string_literals;      // access the s suffix
  using namespace std::string_view_literals; // access the sv suffix

  std::cout << "foo\n";   // no suffix is a C-style string literal
  std::cout << "goo\n"s;  // s suffix is a std::string literal
  std::cout << "moo\n"sv; // sv suffix is a std::string_view literal

  // Dangling View after original Destroyed
  using namespace std::string_literals;
  std::string_view name{"Alex"s}; // "Alex"s creates a temporary std::string
  std::cout << name << '\n';      // undefined behavior

  std::string_view name{getName()}; // Object used in getName() is dead by now
  std::cout << name << '\n';        // undefined behavior

  return 0;
}