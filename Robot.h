#ifndef ROBOT_H
#define ROBOT_H
#include "Move.h"

class Robot : public Move{
    public:
    Robot(){this->Move = "Robot"; this->weakness = {"Monkey", "Pirate"};}
};


#endif