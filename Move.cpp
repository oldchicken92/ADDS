#include "Move.h"
#include <iostream>

std::string Move::getName(){
    return this->Move;
}

std::vector<std::string> Move::getWeakness(){
    return this->weakness; //returns the specific move weakness to later find what beats what
}