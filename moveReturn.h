#ifndef MOVERETURN_H
#define MOVERETURN_H
#include "Move.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Ninja.h"
#include "Zombie.h"
#include "Robot.h"
#include "Pirate.h"
#include "Monkey.h"
#include <string>

//class for move return
class moveReturn{
    public:
    Move* player_move(std::string player); //player move returns the class of the move the player wishes to make

};


#endif