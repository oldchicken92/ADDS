#include "Human.h"
#include "Player.h"
#include "Referee.h"
#include "Computer.h"

int main (){

    Human player1("Bob");
    Human player2("Jake");
    Referee ref;
    Player* winner = ref.refGame(&player1,&player2);
    if (winner == nullptr){
        std::cout << "It's a tie";
    }else{
        std::cout << winner->getName() << " wins" << std::endl;
    }

    return 0;
}
