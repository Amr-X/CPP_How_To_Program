#include <iostream>

bool isPrime(int num){
    for(int i{1};i < num - 1;i++){
      if(!(num % (num - i))){
        return false;
      }
    }
    return true;
}

int main() {
  for (size_t i = 0; i < 100; i++)
  {
    if(isPrime(i)){
      std::cout << i << std::endl;
    }
  }
  
    

    
}