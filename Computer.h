#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"

class Computer : public Player{
    public:
    std::string name;
    Computer(){name = "Computer";};
    std::string getName(){return this->name;};
    char makeMove(){char move = 'R'; return move;};
};

#endif