#include <iostream>

void Print_Err(int Err_Code) {
    std::cout << '\n';
    std::cout << "=============================================================\n";
    std::cout << "==============|           ERROR           |==================\n";
    std::cout << "=============================================================\n";
    std::cout << "Something's Wrong. Please Make Sure You Entered EveryThing Right.\n";
    std::cout << "Bye Bye\n";
    std::cout << "[Program Failed With Exit Code " << Err_Code << "]\n";
}
