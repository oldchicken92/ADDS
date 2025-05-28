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
    int num_borrowed; 
    std::vector<int> patronList; 

    public: 
    Document();
    void setName(std::string new_name){this->name = new_name;}
    std::string getName(){return this->name;}
    void setID(int ID){this->id = ID;}
    int getID(){return this->id;}
    void setLimit(int lim){this->limit = lim;}
    int getLimit(){return this->limit;}
    void setNumBorrowed(int num){this->num_borrowed = num;}
    int getNumBorrowed(){return this->num_borrowed;}
    std::vector<int> getPatronList(){return this->patronList;}
    void setPatronList(const std::vector<int> setter){this->patronList = setter;}
    
};



#endif