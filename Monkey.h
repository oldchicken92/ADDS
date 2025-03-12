#ifndef MONKEY_H
#define MONKEY_H
#include "Move.h"

class Monkey : public Move{
    public:
    Monkey(){this->Move = "Monkey"; this->weakness = {"Zombie", "Pirate"};}
};

#endif 