#include "Human.h"
#include "Player.h"
#include "Referee.h"
#include "Computer.h"

int main (){

    Human player;
    Computer comp;
    Referee ref;
    player.makeMove();

    Player* winner = ref.refGame(&player,&comp);
    if (winner == nullptr){
        std::cout << "It's a tie";
    }else{
        std::cout << winner->name << " wins" << std::endl;
    }

    return 0;
}
