#include <iostream>
#include "Header.h"

static int g_static {10};  // Static variable, only accessible within this file


int main() {
    std::cout << "Using static g_static in main.cpp: " << g_static << '\n';

    // Access the extern variables defined in file2.cpp
    std::cout << "Using extern hg_x: " << hg_x << '\n';
    std::cout << "Using extern const chg_x: " << chg_x << '\n';


    return 0;
}
