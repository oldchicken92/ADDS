#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
#include "moveReturn.h"

class Human : public Player{
    public:
    std::string name;
    Human(){this->name = "Human";};
    Human(std::string player_name){this->name = player_name;};
    Move* makeMove();
    std::string getName(){return this->name;};
};


#endif