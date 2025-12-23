#include <iostream>
#include <limits>
#include "include/global_vars.h"
#include "include/includes.h"

void prime() {
    while (true) {
        std::cout << "Prime Number Tools Ver " << Version << '\n';
        std::cout << "(C)2021 Na Soo-Hwan\n";
        std::cout << "Tools List\n";
        std::cout << "1. PrimeNumberChecker\n";
        std::cout << "2. PrimeNumberGenerator\n";
        std::cout << "3. PrimeNumberFactorizer\n";
        std::cout << "4. Return To Main Menu\n";
        std::cout << "What Tool You Want To Use? [1~4] : ";
        
        int selection;
        std::cin >> selection;
        
        if (std::cin.fail()) {
            std::cout << "0 Is Not Allowed Here. Enter Other Number\n\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        
        std::cout << '\n';
        
        switch (selection) {
            case 1:
                PrimeChkIntro();
                std::cout << '\n';
                break;
            case 2:
                PrimeGenIntro();
                std::cout << '\n';
                break;
            case 3:
                PrimeFacIntro();
                std::cout << '\n';
                break;
            case 4:
                return;
            default:
                // Invalid choice, loop will continue
                break;
        }
    }
}
