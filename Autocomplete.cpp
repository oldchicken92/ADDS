#include "Autocomplete.h"

std::vector<std::string> Autocomplete::suggestion_helper(TrieNode* current, std::string partial_word, std::vector<std::string>& suggestions){
    if (current->isEndOfWord == true){
        suggestions.push_back(partial_word);
    }

    //check all possiblke letters
    for (int l = 0; l < 26; l++){
        if (current->children[l] != nullptr){
            suggestion_helper(current->children[l], partial_word + static_cast<char>('a' + l), suggestions);
        }
    }

    return suggestions;
}

std::vector<std::string> Autocomplete::getSuggestions(std::string partialWord){
    std::vector<std::string> suggestions;
    TrieNode* node = this->Root; 
    for (size_t i = 0; i < partialWord.length(); i++){
        char letter = partialWord[i];
        int j = letter - 'a'; // assuming lowercase
        if (node->children[j] == nullptr){ // if index doesn't exist
            return suggestions;
        }
        node = node->children[j]; // go to child
    }

    suggestion_helper(node, partialWord, suggestions);
    return suggestions;
};



void Autocomplete::insert(std::string word){
    TrieNode* node = this->Root; 
    for (size_t i = 0; i < word.length(); i++){
        char letter = word[i];
        int j = letter - 'a'; // assuming lowercase

        if (node->children[j] == nullptr){ // if index doesn't exist
            node->children[j] = new TrieNode; 
        }
        node = node->children[j]; // go to child
    }

    node->isEndOfWord = true;
};

