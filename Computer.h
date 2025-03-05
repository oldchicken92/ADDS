#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"

class Computer : public Player{
    public:
    Computer(){this->name = "Computer"; this->move = 'R';};
    std::string getName(){return this->name;};
    void makeMove(){this->move = 'R';};
};

#endif