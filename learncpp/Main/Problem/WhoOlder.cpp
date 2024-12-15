#include <iostream>
#include <string>
#include <string_view>
/*
std::string_view is Like const reference (So You Don't Copy String all over the
code)
*/

int getAgeFor(std::string_view name) {
  std::cout << "Enter age of " << name << ": ";
  int age{};
  std::cin >> age;
  return age;
}
std::string getName(int num) {
  std::cout << "Enter the name of person #" << num << " : ";
  std::string person1{};
  // std::getline(std::cin,person1); WRONG
  std::getline(std::cin >> std::ws, person1);
  return person1;
}
void printOlder(std::string_view name1, int age1, std::string_view name2,
                int age2) {
  if (age1 > age2)
    std::cout << name1 << " (age " << age1 << ") is older than " << name2
              << " (age " << age2 << ").\n";
  else
    std::cout << name2 << " (age " << age2 << ") is older than " << name1
              << " (age " << age1 << ").\n";
}

int main() {
  const std::string person1{getName(1)};
  const int age1{getAgeFor(person1)};

  const std::string person2{getName(2)};
  const int age2{getAgeFor(person2)};

  printOlder(person1, age1, person2, age2);

  return 0;
}