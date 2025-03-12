#include "Referee.h"

Player* Referee::refGame(Player * player1, Player * player2){

    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();

    checkPlayerLoss check;
    bool player1_weak = check.weakness_check(move1, move2);
    bool player2_weak = check.weakness_check(move2, move1);
    
    if (player1_weak == false && player2_weak == true){
        return player1;
    }else if (player1_weak == true && player2_weak == false) {
        return player2;
    }else{
        return nullptr;
    }

};