#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
#include "moveReturn.h"

//human class, serves as the IRL player
class Human : public Player{
    public:
    Human(); //default constructor
    Human(std::string player_name); //player name constructor
    Move* makeMove(); //gets the player move
};


#endif