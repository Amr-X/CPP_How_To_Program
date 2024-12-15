#include <iostream>

int getHeight() {
  std::cout << "Enter  the height of the tower in meters: ";
  int height{};
  std::cin >> height;
  return height;
}
void printAtSec(int sec, int height) {
  // Should it Be a Function?
  double distanceFallen{
      9.8 * (sec * sec) /
      2}; //! 9.8 -> Magic Number (Readers don't know what that mean.)

  double ballHeight{height - distanceFallen}; // height has to be known
  if (distanceFallen >= height) {             // At some point this will happen
    std::cout << "At " << sec << " seconds, the ball is on the ground.\n";
  } else {
    std::cout << "At " << sec
              << " seconds, the ball is at height: " << ballHeight
              << " meters\n";
  }
}
int main() {
  int height{getHeight()};

  printAtSec(0, height);
  printAtSec(1, height);
  printAtSec(2, height);
  printAtSec(3, height);
  printAtSec(4, height);
  printAtSec(5, height);
}
