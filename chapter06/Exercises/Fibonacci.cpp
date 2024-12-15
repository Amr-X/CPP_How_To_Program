#include <iostream>

unsigned long recursiveFibonacci(int num){
  if(num == 1 || num == 0){
    return num;
  }
  return recursiveFibonacci(num- 1) + recursiveFibonacci(num -2 );
}
  int fibonacci0{0};
  int fibonacci1{1};
  int sum{0};
unsigned long seriesFibonacci(int num){
  //ToDO : Finish This - Understand it
  for(size_t i{0};i <= num;i++){
    sum = fibonacci0 + fibonacci1;
    fibonacci1 = sum;

  }
  return sum;
}

int main() {
  for (size_t i = 0; i < 10; i++)
  {
    std::cout << recursiveFibonacci(i) << std::endl;
  }
  std::cout << "\nNow iterative version: \n";
    for (size_t i = 0; i < 10; i++)
  {
    std::cout << seriesFibonacci(i) << std::endl;
  }

  

}