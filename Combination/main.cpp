#include <iostream>
#include <limits>
#include "include/includes.h"
#include "include/in.h"

void combination() {
    while (true) {
        std::cout << "Combination Tools\n";
        std::cout << "(C)2021 Na Soo-Hwan\n";
        std::cout << "Select Combination Type\n";
        std::cout << "1. nPr\n";
        std::cout << "2. nCr\n";
        std::cout << "0. Back To Menu\n";
        std::cout << "What Type You Want To Calculate? [0~2] : ";
        
        int type;
        std::cin >> type;
        
        if (std::cin.fail()) {
            std::cout << "Failed To Parse. Enter Other Number\n\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        
        std::cout << '\n';
        
        switch (type) {
            case 1:
                ComP();
                return;
            case 2:
                ComC();
                return;
            case 0:
                main();
                return;
            default:
                // Invalid choice, loop will continue
                break;
        }
    }
}
