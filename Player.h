#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include "Move.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include <iostream>

class Player{
    protected:
    std::string name; //hides player name, only accessible through getName()
    public:
    virtual ~Player();
    virtual Move* makeMove() = 0;
    std::string getName();
    
};


#endif