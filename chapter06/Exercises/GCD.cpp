#include <iostream>
#include <cmath>
//! Don't Check from 1 to N -- 1...25
// Check from 1 to sqrt(N) -- 1..5
// If Yes do N * That number = Give you One more (Can Be Duplicate)
//Better Performance

int gcdBad(int num1, int num2){
  //Get Each factor of num1
  //Compare with each factor of num2
  //if Yes then Return True

//Im Gonna Be Honest Here
//I'm Not Proud Of That.
  for(int i{num1};i>0;i--){
    if(!(num1 % i)){
        for(int j{num2};j>0;j--){
            if(!(num2 % j)) {
              int fact2{num2 % j};
              if(j == i){
                  return j;
              }
            }
        }
    }
  }
}

int gcdGood(int a, int b){
  //I Don't Know how but Okay
  //AKA Euclidean Algorithm 
  while (b != 0) {
        int temp = b;
        b = a % b;  // Remainder when 'a' is divided by 'b'
        a = temp;   // Assign the old 'b' to 'a'
    }
    return a; 
}
int main() {
      std::cout << "Bad gcd Output: " << gcdBad(78,54)<< 
      '\n' << "Good gcd Output: " << gcdGood(78,54) << std::endl;      
}