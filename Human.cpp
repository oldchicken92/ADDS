#include "Human.h"
#include <iostream>

char Human::makeMove(){
    char move;

    while ((move != 'R') && (move != 'S') && (move != 'P')){
        std::cout << std::endl;
        std::cin >> move;
        return move;
    }

    

};