#ifndef MOVE_H
#define MOVE_H
#include <string>
#include <vector>

class Move{
    protected: 
    std::string Move; 
    std::vector<std::string> weakness; 

    public:
    std::string getName();    
    std::vector<std::string> getWeakness();

};



#endif 