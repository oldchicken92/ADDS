#include "Computer.h"
#include <iostream>

//similar implementation to human, gets computers move which is rock
Move* Computer::makeMove(){
    std::string move = "Rock";
    moveReturn R;
    Move* actual_move = R.player_move(move);
    return actual_move; //returns Rock class
};

//default constructor
Computer::Computer(){
    this->name = "Computer";
}

