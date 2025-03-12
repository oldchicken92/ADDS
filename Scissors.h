#ifndef SCISSORS_H
#define SCISSORS_H
#include "Move.h"

class Scissors : public Move{
    public:
    Scissors(){this->Move = "Scissors"; this->weakness = {"Rock"};};

};

#endif