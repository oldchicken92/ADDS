#ifndef ZOMBIE_H
#define ZOMBIE_H
#include "Move.h"

class Zombie : public Move{
    public:
    Zombie(){this->Move = "Zombie"; this->weakness = {"Ninja","Robot"};}
};




#endif