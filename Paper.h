#ifndef PAPER_H
#define PAPER_H
#include "Move.h"

class Paper : public Move{
    public:
    Paper(){this->Move = "Paper"; this->weakness = {"Scissors"};};

    

};




#endif