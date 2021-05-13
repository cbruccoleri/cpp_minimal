/**
 * @file MyProject.cpp
 * 
 * @brief Main program.
 * 
 * License: MIT. See LICENSE file.
 */
#include "MyProject.h"
#include <iostream>

int main(int argc, char* argv[])
{
    std::cout << "Hello world!\n";

    // TODO: your code
    // Example: enumerate arguments
    std::cout << "Arguments:\n";
    for (int i = 1; i < argc; ++i)
        std::cout << '\t' << argv[i] << '\n';
    std::cout << std::endl;
    return 0;
}
