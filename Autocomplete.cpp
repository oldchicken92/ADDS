#include "Autocomplete.h"

std::vector<std::string> Autocomplete::getSuggestions(std::string partialWord){

};



void Autocomplete::insert(std::string word){
    TrieNode* root = this->Root; 
    for (size_t i; i < word.length(); i++){
        char letter = word[i];
        int j = letter - 'a'; // assuming lowercase

        bool check_char_exists;
        if (root->children[j] == nullptr){ // if index doesn't exist
            
        }
    }
};