#include <iostream>
#include <limits>
#include "includes.h"

int main() {
    while (true) {
        std::cout << "Welcome To Integral Tools. (C)2021 Na Soo-Hwan\n";
        std::cout << "      1. Prime Number\n";
        std::cout << "      2. Simple Calculator\n";
        std::cout << "      3. Combination\n";
        std::cout << "      0. Exit This Program\n";
        std::cout << "What Category Would You Like To Use? [0~3] : ";
        
        int category;
        std::cin >> category;
        
        if (std::cin.fail()) {
            std::cout << "Error Parsing. Please Try Another Number\n\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        
        std::cout << '\n';
        
        switch (category) {
            case 1:
                prime();
                break;
            case 2:
                calc();
                break;
            case 3:
                combination();
                break;
            case 0:
                return 0;
            default:
                // Invalid choice, loop will continue
                break;
        }
    }
}
