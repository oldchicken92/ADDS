#include "moveReturn.h"


Move* moveReturn::player_move(std::string player_move){

    if (player_move == "Rock"){
        return new Rock;
    }else if(player_move == "Paper"){
        return new Paper;
    }else if(player_move == "Scissors"){
        return new Scissors;
    }else if(player_move == "Zombie"){
        return new Zombie;
    }else if (player_move == "Pirate"){
        return new Pirate;
    }else if (player_move == "Ninja"){
        return new Ninja;
    }else if (player_move == "Robot"){
        return new Robot;
    }else if(player_move == "Monkey"){
        return new Monkey;
    }else{
        return nullptr;
    }

}