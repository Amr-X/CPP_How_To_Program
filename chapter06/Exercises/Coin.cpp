#include <cstdlib>
#include <ctime>
#include <iostream>


bool flip( void ) { return rand() % 2; }

int main() {

   int heads{0};
   int tails{0};

   srand(time(0));

   for (int i{1}; i <= 100; ++i)
      flip() ? heads++ : tails++;

   std::cout << "Heads: " << heads
      << "\nTails: " << tails
      << std::endl;

   return 0;
}