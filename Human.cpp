#include "Human.h"

char Human::makeMove(){
    std::cout << "Enter move: ";
    std::cin >> this->move;

    while ((this->move != 'R') && (this->move != 'S') && (this->move != 'P')){
        std::cout << std::endl;
        std::cout << "Enter move: ";
        std::cin >> this->move;
        return this->move;
    }

    

};