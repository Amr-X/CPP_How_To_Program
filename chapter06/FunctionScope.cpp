#include <iostream>
using namespace std;

void useLocal(); 
void useStaticLocal();
void useGlobal(); 

int x{1}; 

int main() {
   cout << "global x in main is " << x << endl; //1

   int x{5}; 

   cout << "local x in main's outer scope is " << x << endl; //5

   {                           
      int x{7}; 
      cout << "local x in main's inner scope is " << x << endl; //7
   }

   cout << "local x in main's outer scope is " << x << endl; //5

   useLocal(); //25 26
   useStaticLocal(); //50 51
   useGlobal(); //1 10
   useLocal(); //25 26
   useStaticLocal(); //51 52
   useGlobal(); //10 100

   cout << "\nlocal x in main is " << x << endl;
}


void useLocal() {
   int x{25}; 

   cout << "\nlocal x is " << x << " on entering useLocal" << endl;
   ++x;
   cout << "local x is " << x << " on exiting useLocal" << endl;
}


void useStaticLocal() {
   static int x{50}; 

   cout << "\nlocal static x is " << x << " on entering useStaticLocal"
      << endl;
   ++x;
   cout << "local static x is " << x << " on exiting useStaticLocal"
      << endl;
}


void useGlobal() {
   cout << "\nglobal x is " << x << " on entering useGlobal" << endl;
   x *= 10; //modify global to 10
   cout << "global x is " << x << " on exiting useGlobal" << endl;
}