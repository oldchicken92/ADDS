#ifndef NINJA_H
#define NINJA_H
#include "Move.h"

class Ninja : public Move{
    public:
    Ninja(){this->Move = "Ninja"; this->weakness = {"Monkey", "Robot"};}
};

#endif