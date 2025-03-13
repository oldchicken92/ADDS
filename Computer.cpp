#include "Computer.h"
#include <iostream>

Move* Computer::makeMove(){
    std::string move;
    std::cin >> move;
    moveReturn R;
    Move* actual_move = R.player_move(move);
    return actual_move;
};

std::string Computer::getName(){
    return this->name;
};

