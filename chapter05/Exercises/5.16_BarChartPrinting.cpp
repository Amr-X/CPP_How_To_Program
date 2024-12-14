#include <iostream>
#include <string>

int main() {
  int input{0};
  std::string buildnumber;
  std::cout << "Enter 5 Integers:";

  for (int i = 1; i <= 5; i++) {
    std::cin >> input; // 5
    buildnumber = "";

    if (input < 10 && input > 0) {
      std::string inputstring = std::to_string(input); 
      for (int j{1}; j <= input; j++) {               
        buildnumber = buildnumber + inputstring;
      }
      std::cout << buildnumber << std::endl << buildnumber << std::endl;
    } else {
      std::cout << "Invalid!" << std::endl;
    }
  }
}
