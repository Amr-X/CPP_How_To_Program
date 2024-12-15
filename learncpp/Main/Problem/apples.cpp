#include <iostream>

std::string getQuantityPhrase(int num) {
  if (num < 0) {
    return "negative";
  }
  if (!num) {
    return "no";
  } else {
    if (num == 1) {
      return "a single";
    }
    if (num == 2) {
      return "a couple of";
    }
    if (num == 3) {
      return "a few";
    }
    return "many";
  }
}
std::string getApplesPluralized(int num) {
  return (num == 1) ? "Apple" : "Apples";
}
int main() {
  constexpr int maryApples{3};
  std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' '
            << getApplesPluralized(maryApples) << ".\n";

  std::cout << "How many apples do you have? ";
  int numApples{};
  std::cin >> numApples;

  std::cout << "You have " << getQuantityPhrase(numApples) << ' '
            << getApplesPluralized(numApples) << ".\n";

  return 0;
}