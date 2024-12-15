#include<iostream>

int getInput(){
  int num{};
  std::cin >> num;
  return num;
}

int main(){
  std::cout << "Enter an integer: ";
  int smaller{getInput()};
  std::cout << "Enter a larger integer: ";
  int larger{getInput()};

  if(smaller > larger){
    std::cout << "Swapping the Values\n";
    int temp{smaller};
    larger = temp;
  }//temp is Dead here
  std::cout << "The smaller value is " << smaller << std::endl;
  std::cout << "The larger value is " << larger << std::endl;

}