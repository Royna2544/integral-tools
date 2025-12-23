#include <iostream>
#include <limits>
#include <string>
#include "include/chk.h"
#include "include/includes.h"

namespace {
    void PrimeChk(int num, bool verbose) {
        bool is_prime = false;
        for (int i = 2; i < num; ++i) {
            if (verbose) {
                std::cout << "Dividing " << num << " by " << i << "...";
            }
            
            if (num % i == 0) {
                if (i != num) {
                    is_prime = false;
                    std::cout << "Dividing " << num << " by " << i << "...";
                    std::cout << " Remainder is 0.\n";
                    break;
                }
            } else {
                is_prime = true;
                if (verbose) {
                    std::cout << " Remainder isn't 0.\n";
                }
            }
        }
        
        std::cout << "Is Number " << num << " Prime? " << (is_prime ? "Yes" : "No") << ".\n";
    }
}

void PrimeChkIntro() {
    int input_num = 1;
    
    while (true) {
        std::cout << "\nPrime Number Checker\n";
        std::cout << "(C)2021 Na Soo-Hwan\n";
        std::cout << "What Number Do You Want To Check?[integral] :";
        std::cin >> input_num;
        std::cout << '\n';
        
        if (std::cin.fail()) {
            std::cout << "Error in parsing input. Enter Other Number\n";
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
            PrimeChk(input_num, true);
            break;
        } else if (verbose_choice == "n") {
            PrimeChk(input_num, false);
            break;
        } else {
            std::cout << "Unexpected " << verbose_choice << ". Try Again.\n";
        }
    }
}
