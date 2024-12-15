/*
--<bitset> Library Takes Memory but Fast (64-bit 8 bytes) on my Machine
---We have Control Over Invidual Bits not  8 bytes which is the minimum on
modern Architectures

---Use with Bitset The Bitwise Operators (~,|,&,^,<<,>>)

---Bit Literals Are in C++14 (0b01010)

---Bit Mask (0010)
--Do & with Your Number -> True if [1] place is On
--Do | with Your Number -> Turn on [1] bit
--Do ^ with Your Number -> Flip the[1] bit




*/
#include <bitset>
#include <iostream>

int main() {
  [[maybe_unused]] constexpr int isHungry{0};
  [[maybe_unused]] constexpr int isSad{1};
  [[maybe_unused]] constexpr int isMad{2};
  [[maybe_unused]] constexpr int isHappy{3};
  [[maybe_unused]] constexpr int isLaughing{4};
  [[maybe_unused]] constexpr int isAsleep{5};
  [[maybe_unused]] constexpr int isDead{6};
  [[maybe_unused]] constexpr int isCrying{7};

  std::bitset<8> me{0b0000'0101};
  me.set(isHappy);
  me.flip(isLaughing);
  me.reset(isLaughing);

  std::cout << "All the bits: " << me << '\n';
  std::cout << "I am happy: " << me.test(isHappy) << '\n';
  std::cout << "I am laughing: " << me.test(isLaughing) << '\n';

  std::cout << (std::bitset<4>{0b0101} & std::bitset<4>{0b0110})
            << '\n'; // bitwise And

  return 0;
}