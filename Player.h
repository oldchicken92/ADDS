#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <iostream>

class Player{
    public:
    
    ~Player();
    std::string name;
    char move;
    virtual void makeMove( );
    virtual std::string getName( );
};


#endif