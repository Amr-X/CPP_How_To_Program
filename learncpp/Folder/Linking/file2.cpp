#include <iostream>
#include "Header.h"

// Define the external variables
int g_x {20};  // External variable, defined here, but not accessible in main.cpp due to static g_static
int hg_x {14};  // This is the variable we will use in main.cpp
extern const int chg_x{25};  // A constant external variable

void headerFunction() {
    std::cout << "Inside headerFunction in file2.cpp.\n";
}
