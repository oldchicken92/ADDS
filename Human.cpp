#include "Human.h"
#include <iostream>

Move* Human::makeMove(){
    std::string move;
    std::cin >> move;
    moveReturn R;
    Move* actual_move = R.player_move(move);
    return actual_move;
};

/*
std::string Human::getName(){
    return this->name;
};
*/