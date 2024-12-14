#include <iostream>

using namespace std;

int main() {
  int r{0};
  const double PI = 3.14159;
  cout << "Enter Circle Radius: " << endl;
  cin >> r;
  cout << "\nCircle Diameter is:" << 2 * PI
       << "\nCircle Circumference is:" << 2 * PI * r
       << "\nCircle Area is:" << PI * r * r;
}