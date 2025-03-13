#include "moveReturn.h"
//once given the players string, it decides which move the player has made
//and returns the string interms of a class to then be manipulated later on

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
        return nullptr; //if player has not inputed any of the classes
    }

}