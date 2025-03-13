#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"
#include "moveReturn.h"

class Computer : public Player{
    public:
    Computer();
    Move* makeMove();
};

#endif