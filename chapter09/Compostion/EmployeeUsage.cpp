#include <iostream>
#include "Date.h" 
#include "Employee.h" 

using namespace std;

int main() {

Date birth;
Date hire;

Employee manager{"Bob", "Blue", birth, hire};

cout << "\n" << manager.toString() << endl;

}