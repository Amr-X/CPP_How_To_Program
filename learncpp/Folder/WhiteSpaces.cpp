#include <iostream>

using namespace std;
int main() {
  //     int x; // between x and int
  //                         int
  // z; // valid \n is whitespace

  //!     Wrong
  //   cout << "Hello
  //       world !\n "; !Wrong

  cout << "Hello "
          "world!\n"; //! Works
  int x{2};
  std::cout << (x = 5) << '\n'; // Operator = Return value (5)
}