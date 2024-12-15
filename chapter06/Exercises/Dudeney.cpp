#include <iostream>
#include <cmath> //cbrt()

bool isDudeney(int num){
    int org{num};
    int sum{0};
    while(num > 0){
      int d{num % 10};
      sum +=d;
      num /= 10;
    }
    
    return (sum * sum * sum) == org;
    
}
int main() {
    int i{0};
    for(int num{0};i<6;num++){
        if(isDudeney(num)){
            std::cout << num << std::endl;
            i++;
        }
    }
}