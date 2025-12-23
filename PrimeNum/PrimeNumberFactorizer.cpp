#include <iostream>
#include <limits>
#include <array>
#include <vector>
#include "include/factorization.h"
#include "include/includes.h"

namespace {
    bool IsPrime(int number) {
        if (number < 2) {
            return false;
        }
        
        for (int i = 2; i < number; ++i) {
            if (number % i == 0 && i != number) {
                return false;
            }
        }
        return true;
    }
    
    void PrimeFac(int num, int origin, std::vector<int>& components) {
        for (int i = 2; i < num; ++i) {
            if (IsPrime(num)) {
                std::cout << '\n' << origin << " is ";
                for (int comp : components) {
                    std::cout << comp << " * ";
                }
                std::cout << num << '\n';
                break;
            } else {
                if (num % i == 0) {
                    components.push_back(i);
                    PrimeFac(num / i, origin, components);
                    break;
                }
            }
        }
    }
}

void PrimeFacIntro() {
    int input_num = 1;
    
    while (true) {
        std::cout << "\nPrime Number Factorizer\n";
        std::cout << "(C)2021 Na Soo-Hwan\n";
        std::cout << "What Number To Analyze?[integral] :";
        std::cin >> input_num;
        std::cout << '\n';
        
        if (std::cin.fail()) {
            std::cout << input_num << "0 Is Not Allowed Here. Enter Other Number\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        break;
    }
    
    std::vector<int> components;
    PrimeFac(input_num, input_num, components);
}
