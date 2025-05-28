#ifndef DOCUMENT_H
#define DOCUMENT_H
#include <string>
#include "Patron.h"
#include <vector>

class Document{
    private:
    std::string name;
    int id; 
    int limit; 
    std::vector<int> patronList; 

    public: 
    Document();
    void setName(std::string new_name){this->name = new_name;}
    std::string getName(){return this->name;}
    void setID(int ID){this->id = ID;}
    int getID(){return this->id;}
    void setLimit(int lim){this->limit = lim;}
    
};



#endif