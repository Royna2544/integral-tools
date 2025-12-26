#include <iostream>
#include <limits>
#include <string>
#include "include/includes.h"
#include "include/combinc.h"

namespace {
    void ComCCal(int nnum, int rnum, bool verbose) {
        std::cout << "Calculating " << nnum << "C" << rnum << ".\n";
        
        if (verbose) {
            std::cout << "Step 1. Multiplying From " << nnum << " To " << (nnum - rnum + 1) << '\n';
        }
        
        int factorial = 1;
        for (int a = nnum; a >= nnum - rnum + 1; --a) {
            factorial *= a;
        }
        
        if (verbose) {
            std::cout << "Step 1's Answer is " << factorial << ".\n";
        }
        
        int my_factorial = 1;
        for (int h = 1; h <= rnum; ++h) {
            my_factorial *= h;
        }
        
        int answer = factorial / my_factorial;
        
        if (verbose) {
            std::cout << "Step 2. Dividing " << factorial << " by " << my_factorial << "...\n";
        }
        
        std::cout << "Answer is " << answer << ".\n";
    }
}

void ComC() {
    int myn = 0;
    
    while (true) {
        std::cout << "\nCombination > nCr\n";
        std::cout << "(C)2021 Na Soo-Hwan\n";
        std::cout << "What Number is n in nCr? [integral] :";
        std::cin >> myn;
        std::cout << '\n';
        
        if (std::cin.fail() || myn <= 1) {
            std::cout << "Error in Parsing. Enter Other Number\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        break;
    }
    
    int myr = 0;
    while (true) {
        std::cout << "\nWhat Number is r in nCr? [integral] :";
        std::cin >> myr;
        std::cout << '\n';
        
        if (std::cin.fail() || myr > myn) {
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
            ComCCal(myn, myr, true);
            break;
        } else if (verbose_choice == "n") {
            ComCCal(myn, myr, false);
            break;
        } else {
            std::cout << "Unexpected " << verbose_choice << ". Try Again.\n";
        }
    }
}
