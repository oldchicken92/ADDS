#include "DocumentManager.h"

    DocumentManager::DocumentManager(){

    }

    void DocumentManager::addDocument(std::string name, int id, int license_limit){
        Document new_doc; 
        new_doc.setID(id);
        new_doc.setName(name);
        new_doc.setLimit(license_limit);
        this->document_Library.insert({id, name});
        return;
    };

    void DocumentManager::addPatron(int patronID){
        Patron* new_patron = new Patron(patronID);
        this->patrons.insert({patronID, new_patron});
        return;
    };

    int DocumentManager::search(std::string name){
        bool check; 
        for (auto i = this->document_Library.begin(); i!=this->document_Library.end(); i++){
            if (i->second == name){
                return i->first;
            }
        }

        return 0;      

    }; // returns docid if name is in the document collection or 0 if the name is not in the collection

    bool DocumentManager::borrowDocument(int docid, int patronID){
        //check to see if docId exist and patronID exist
        

    };  // returns true if document is borrowed, false if it can not be borrowed (invalid patronid or the number of copies current borrowed has reached the license limit)

    void DocumentManager::returnDocument(int docid, int patronID){

    };