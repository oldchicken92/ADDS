#include "Human.h"
#include <iostream>

//function to get player to make a move
Move* Human::makeMove(){
    std::string move;
    std::cout << getName() << " move: ";
    std::cin >> move; //get user input

    moveReturn R; // used to translate player string to move class
    Move* class_move = R.player_move(move);

    return class_move;
}

Human::Human(){
    this->name = "Human";
}

Human::Human(std::string player_name){
    this->name = player_name;
}
