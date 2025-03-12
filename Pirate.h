#ifndef PIRATE_H
#define PIRATE_H
#include "Move.h"

class Pirate : public Move{
    public:
    Pirate(){this->Move = "Pirate"; this->weakness = {"Ninja","Zombie"};}
};

#endif