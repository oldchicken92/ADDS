#include "Human.h"
#include <iostream>

char Human::makeMove(){
    std::cout << "Enter move: ";
    char move;
    std::cin >> move;

    while ((move != 'R') && (move != 'S') && (move != 'P')){
        std::cout << std::endl;
        std::cout << "Enter move: ";
        std::cin >> move;
        return move;
    }

    

};