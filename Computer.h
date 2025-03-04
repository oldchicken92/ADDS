#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"

class Computer : public Player{
    Computer(){this->name = "Computer"; this->move = 'R';};

};

#endif