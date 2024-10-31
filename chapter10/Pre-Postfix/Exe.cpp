#include <iostream>
#include "Date.h"
using namespace std;

int main() {
   Date d1{27, 12, 2010}; // December 27, 2010
   Date d2; // defaults to January 1, 1900

   cout << "d1 is " << d1 << "\nd2 is " << d2;
   cout << "\n\nd1 += 7 is " << (d1 += 7);


   Date d3{13, 7, 2010};

   cout << "\n\nTestdkljhfsdkljhfskdlh the prefix increment operator:\n"
      << "  d3 is " << d3 << endl;
   cout << "++d3 is " << ++d3 << endl;
   cout << "  d3 is " << d3;

   cout << "\n\nTesting the postfix increment operator:\n"
      << "  d3 is " << d3 << endl;
   cout << "d3++ is " << d3++ << endl;
   cout << "  d3 is " << d3 << endl;
}