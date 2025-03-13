#include "checkPlayerLoss.h"

bool checkPlayerLoss::weakness_check(Move* player1, Move* player2){
    
    //handle possible null pointers from mis-inputted player move (see moveReturn.cpp to understand)
    if ((player1 == nullptr) || (player2 == nullptr)) {
        return false;
    }

    //comparing player1 weaknesses with the player2 class
    std::vector player1_weakness = player1->getWeakness();
    std::string player2_move = player2->getName();

    for (unsigned long int i = 0; i < player1_weakness.size(); i++){
        if (player2_move == player1_weakness.at(i)){
            return true; //if player2 is a weakness of player1
        }
    }

    return false; //if player2 is not a weakness of player1

}