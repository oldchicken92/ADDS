#include "Move.h"

std::string Move::getName(){
    return this->Move;
}

std::vector<std::string> Move::getWeakness(){
    return this->weakness;
}