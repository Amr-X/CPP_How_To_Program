#include <bitset>
#include <iostream>

std::bitset<4> rotateLeft(std::bitset<4> bits) {
  if (bits.test(3)) {
    bits <<= 1;
    bits.flip(0);
  } else {
    bits <<= 1;
  }
  return bits;
}

int main() {
  std::bitset<4> bits1{0b0001};
  std::cout << rotateLeft(bits1) << '\n';

  std::bitset<4> bits2{0b1001};
  std::cout << rotateLeft(bits2) << '\n';

  return 0;
}