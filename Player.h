#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include "Move.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include <iostream>

class Player{
    public:
    std::string name;
    virtual ~Player();
    virtual Move* makeMove() = 0;
    virtual std::string getName() = 0;
    
};


#endif