#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class Player{
    public:
    std::string name;
    char move;
    virtual void makeMove( ) = 0;
    virtual std::string getName( ) = 0;
};


#endif