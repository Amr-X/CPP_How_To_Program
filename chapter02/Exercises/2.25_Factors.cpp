#include <iostream>

using namespace std;
int main() {
  // 1. Take 3 Integers
  // 2. Check First 2
  // 3. If Checked Print if not Terminate

  int n1, n2, n3{0};
  cout << "Enter 3 Numbers: " << endl;
  cin >> n1 >> n2 >> n3;
  if ((n3 % n1 == 0) && (n3 % n2 == 0)) {
    cout << "Number 1 and 2 are factors of number 3." << endl;
  } else {
    cout << "Number 1 and 2 are not factors of number 3." << endl;
  }
  return 0;
}