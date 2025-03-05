#include "Referee.h"

Player* Referee::refGame(Player * player1, Player * player2){
    if (player1->move == player2->move){
        return nullptr;
    }else if ((player1->move == 'R' && player2->move == 'S') || (player1->move == 'P' && player2->move == 'R') || (player1->move == 'S' && player2->move == 'P')){
        return player1;
    }else{
        return player2;
    }

};