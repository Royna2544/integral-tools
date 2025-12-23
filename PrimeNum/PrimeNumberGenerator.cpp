#include <iostream>
#include <limits>
#include <string>
#include "include/gen.h"
#include "include/includes.h"

namespace {
    void PrimeGen(int num, bool verbose) {
        for (int i = 2; i <= num; ++i) {
            if (verbose) {
                std::cout << "Calculating If " << i << " is Prime Number... ";
            }
            
            bool is_prime = true;
            for (int p = 2; p < i; ++p) {
                if (i % p == 0) {
                    is_prime = false;
                    if (verbose) {
                        std::cout << i << " is Dividable by " << p << '\n';
                    }
                    break;
                }
            }
            
            if (is_prime) {
                std::cout << i << " is prime!\n";
            }
        }
    }
}

void PrimeGenIntro() {
    int input_num = 1;
    
    while (true) {
        std::cout << "\nPrime Number Generator\n";
        std::cout << "(C)2021 Na Soo-Hwan\n";
        std::cout << "What Number Is Max?[integral] :";
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
            PrimeGen(input_num, true);
            break;
        } else if (verbose_choice == "n") {
            PrimeGen(input_num, false);
            break;
        } else {
            std::cout << "Unexpected " << verbose_choice << ". Try Again.\n";
        }
    }
}
