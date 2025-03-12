#include "checkPlayerLoss.h"

bool checkPlayerLoss::weakness_check(Move* player1, Move* player2){
    std::vector player1_weakness = player1->getWeakness();
    std::string player2_move = player2->getName();

    for (unsigned long int i = 0; i < player1_weakness.size(); i++){
        if (player2_move == player1_weakness.at(i)){
            return true;
        }
    }

    return false;

}