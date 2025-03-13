#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
#include "moveReturn.h"

class Human : public Player{
    public:
    Human(){this->name = "Human";};
    Human(std::string player_name){this->name = player_name;};
    Move* makeMove();
    //std::string getName();
};


#endif