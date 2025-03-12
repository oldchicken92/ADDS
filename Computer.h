#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"
#include "moveReturn.h"

class Computer : public Player{
    public:
    std::string name;
    Computer(){name = "Computer";};
    std::string getName(){return this->name;};
    Move* makeMove();
};

#endif