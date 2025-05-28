#ifndef DOC_MANAGER_H
#define DOC_MANAGER_H

#include <string.h>
#include <iostream>
#include <unordered_map>
#include "Document.h"
#include "Patron.h"

class DocumentManager{
    private: 

    std::unordered_map<int, std::string> document_Library; 
    std::unordered_map<int, Patron*> patrons;

    public:

    DocumentManager();

    void addDocument(std::string name, int id, int license_limit);

    void addPatron(int patronID);

    int search(std::string name); // returns docid if name is in the document collection or 0 if the name is not in the collection

    bool borrowDocument(int docid, int patronID);  // returns true if document is borrowed, false if it can not be borrowed (invalid patronid or the number of copies current borrowed has reached the license limit)

    void returnDocument(int docid, int patronID);

};




#endif