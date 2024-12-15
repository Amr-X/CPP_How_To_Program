#include <iostream>
#include <cmath>
  int getMinutes(int days, int hours, int minutes){
  return minutes + 60 *(hours + days * 24 );
}
int main() {
    int time1{getMinutes(10,20,11)};
    std::cout << "The First Time for (10 Days, 20 Hours, 11 Minutes): " << time1 << std::endl;

    int time2{getMinutes(4,13,50)};
    std::cout << "The Second Time for (4 Days, 13 Hours, 50 Minutes): " << time2 << std::endl;

    int diff{abs(time2-time1)};
    std::cout << "The Difference Between: "
    << diff << std::endl;
    
   

}