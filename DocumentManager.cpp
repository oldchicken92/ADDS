#include "DocumentManager.h"

    DocumentManager::DocumentManager(){

    }

    void DocumentManager::addDocument(std::string name, int id, int license_limit){
        Document* new_doc = new Document; 
        new_doc->setID(id);
        new_doc->setName(name);
        new_doc->setLimit(license_limit);
        this->document_Library.insert({id, name});
        this->document_storage.insert({id, new_doc});
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
        auto iterator_doc = this->document_Library.find(docid);
        auto iterator_patron = this->patrons.find(patronID);

        if ((iterator_doc == this->document_Library.end())||(iterator_patron == this->patrons.end())){ //check to see if exist, if one of them don't return false
            return false; 
        }

        //check borrow limit
        Document* doc = this->document_storage[docid];
        if (doc->getNumBorrowed() <= doc->getLimit()){
            return false;
        }

        //Check to see if patron already borrowed it
        std::vector patrons = doc->getPatronList();
        auto patron_it = std::find(patrons.begin(), patrons.end(), patronID);
        if (patron_it != patrons.end()){
            return true;
        }

        //add patron to doc
        patrons.push_back(patronID);
        doc->setPatronList(patrons); //set updated vecotr in doc
        int prev_num = doc->getNumBorrowed();
        doc->setNumBorrowed(prev_num++); //set right number of docs borrowed
        return true;

    };  // returns true if document is borrowed, false if it can not be borrowed (invalid patronid or the number of copies current borrowed has reached the license limit)

    void DocumentManager::returnDocument(int docid, int patronID){
         //check to see if docId exist and patronID exist
        auto iterator_doc = this->document_Library.find(docid);
        auto iterator_patron = this->patrons.find(patronID);

        if ((iterator_doc == this->document_Library.end())||(iterator_patron == this->patrons.end())){ //check to see if exist, if one of them don't return false
            return;
        }

        Document* doc = this->document_storage[docid];
        
        //Check to see if patron ever borrowed it
        std::vector patrons = doc->getPatronList();
        auto patron_it = std::find(patrons.begin(), patrons.end(), patronID);
        if (patron_it == patrons.end()){
            return;
        }

        //changer borrow status
        patrons.erase(patron_it);
        doc->setPatronList(patrons);
        int num_borrowed = doc->getNumBorrowed();
        doc->setNumBorrowed(num_borrowed);
        return; 

    };