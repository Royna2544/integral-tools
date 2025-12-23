#include <iostream>
#include <limits>
#include <string>
#include <string_view>
#include "include/vars.h"

namespace {
    constexpr float version = 2.1f;
    
    enum class Operation {
        Plus = 1,
        Minus = 2,
        Multiply = 3,
        Divide = 4,
        ReturnToMenu = 5
    };
    
    constexpr std::string_view get_operation_symbol(Operation op) {
        switch (op) {
            case Operation::Plus: return "+";
            case Operation::Minus: return "-";
            case Operation::Multiply: return "*";
            case Operation::Divide: return "/";
            default: return "";
        }
    }
    
    std::string get_operation_prompt(Operation op, double num1, bool is_first) {
        auto op_symbol = get_operation_symbol(op);
        
        if (is_first) {
            return std::string("Enter The First Number (Currently ? ") + 
                   std::string(op_symbol) + " ?) [Float]: ";
        } else {
            return "Enter The Second Number (Currently " + 
                   std::to_string(num1) + " " + 
                   std::string(op_symbol) + " ?) [Float]: ";
        }
    }
    
    constexpr double calculate(Operation op, double num1, double num2) {
        switch (op) {
            case Operation::Plus: return num1 + num2;
            case Operation::Minus: return num1 - num2;
            case Operation::Multiply: return num1 * num2;
            case Operation::Divide: return num1 / num2;
            default: return 0.0;
        }
    }
}

void calc() {
    while (true) {
        std::cout << "=============================================================\n";
        std::cout << "=========   Welcome To Terminal Caculator Ver " << version << "  ==========\n";
        std::cout << "=============================================================\n\n";
        std::cout << "      == Please Enter The Operator You Want To Use ==\n";
        std::cout << "             1. Plus (+)\n";
        std::cout << "             2. Minus (-)\n";
        std::cout << "             3. Multiply (*)\n";
        std::cout << "             4. Divide (/)\n";
        std::cout << "             5. Return To Main Menu\n";
        std::cout << "Your Choice [1~5]: ";
        
        int operatorNum;
        std::cin >> operatorNum;
        
        if (operatorNum == static_cast<int>(Operation::ReturnToMenu)) {
            return;
        }
        
        if (operatorNum < 1 || operatorNum > 4) {
            Print_Err();
            continue;
        }
        
        auto operation = static_cast<Operation>(operatorNum);
        
        std::cout << "You Choosed " << operatorNum << ". Is it Correct? [y/n] : ";
        char is_correct;
        std::cin >> is_correct;
        std::cout << '\n';
        
        if (is_correct == 'n') {
            std::cout << "OK, Taking You To The First Page....\n\n\n";
            continue;
        } else if (is_correct != 'y') {
            Print_Err(2);
            continue;
        }
        
        std::cout << "OK\n";
        std::cout << get_operation_prompt(operation, 0, true);
        
        double num1;
        std::cin >> num1;
        std::cout << "Entered " << num1 << " as Num1\n";
        
        double num2;
        while (true) {
            std::cout << get_operation_prompt(operation, num1, false);
            std::cin >> num2;
            std::cout << "Entered " << num2 << " as Num2\n";
            
            if (operation == Operation::Divide && num2 == 0.0) {
                std::cout << "Can't Divide By 0. Re-Enter Num2.\n\n";
                continue;
            }
            break;
        }
        
        double answer = calculate(operation, num1, num2);
        
        std::cout << "\n\n";
        std::cout << "=============================================================\n";
        std::cout << "==================|    ANSWER IS " << answer << "    |===================\n";
        std::cout << "=============================================================\n";
        
        break;
    }
}
