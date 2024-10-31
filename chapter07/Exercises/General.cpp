#include <iostream>
#include <array>
using namespace std;

int main() {
   //can't assign Arr to Arr
   //Only the Same Size (Copying)
   std::array<int, 17> a = {7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7};
   std::array<int, 50> b = {};

   for (size_t i{0};i < a.size();i++){
      b[i] = a[i];
   }

   for (const auto &elem:b){
    cout << elem <<" ";
   }
   cout << endl;

   ///////////////////////

   
}