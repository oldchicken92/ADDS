#include "Human.h"

void Human::makeMove(){
    std::cout << "Enter move: ";
    std::cin >> this->move;

    while (this->move =! 'R' || 'S' || 'P'){
        std::cout << std::endl;
        std::cout << "Enter move: ";
        std::cin >> this->move;
    }

    

};