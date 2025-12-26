#include <iostream>
#include <limits>
#include <string>
#include "include/includes.h"
#include "include/combinp.h"

namespace {
    void ComPCal(int nnum, int rnum, bool verbose) {
        std::cout << "Calculating " << nnum << "P" << rnum << ".\n";
        
        if (verbose) {
            std::cout << "Multiplying From " << nnum << " To " << (nnum - rnum + 1) << '\n';
        }
        
        int factorial = 1;
        for (int a = nnum; a >= nnum - rnum + 1; --a) {
            factorial *= a;
        }
        
        std::cout << "Answer is " << factorial << ".\n";
    }
}

void ComP() {
    int n = 0;
    
    while (true) {
        std::cout << "\nCombination > nPr\n";
        std::cout << "(C)2021 Na Soo-Hwan\n";
        std::cout << "What Number is n in nPr? [integral] :";
        std::cin >> n;
        std::cout << '\n';
        
        if (std::cin.fail() || n <= 1) {
            std::cout << "Error in Parsing. Enter Other Number\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        break;
    }
    
    int r = 0;
    while (true) {
        std::cout << "\nWhat Number is r in nPr? [integral] :";
        std::cin >> r;
        std::cout << '\n';
        
        if (std::cin.fail() || r > n) {
            std::cout << "Error in Parsing. Enter Other Number\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        break;
    }
    
    while (true) {
        std::cout << "Verbose or non-verbose? [v/n] : ";
        std::string verbose_choice;
        std::cin >> verbose_choice;
        
        if (verbose_choice == "v") {
            ComPCal(n, r, true);
            break;
        } else if (verbose_choice == "n") {
            ComPCal(n, r, false);
            break;
        } else {
            std::cout << "Unexpected " << verbose_choice << ". Try Again.\n";
        }
    }
}
