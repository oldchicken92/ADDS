#include "Human.h"
#include <iostream>

Move* Human::makeMove(){
    std::string move;
    std::cin >> move;
    std::cout << this->name;
    moveReturn R;
    Move* actual_move = R.player_move(move);
    return actual_move;
};

std::string Human::getName(){
    return this->name;
};