#include "Move.h"
#include <iostream>

std::string Move::getName(){
    std::cout << this->Move;
    return this->Move;
}

std::vector<std::string> Move::getWeakness(){
    return this->weakness;
}