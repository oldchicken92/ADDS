#include <iostream>
#include <string>
#include <vector>

class Autocomplete{

    private:

    struct TrieNode
    {   
        bool isEndOfWord;
        std::vector<TrieNode*> children;

        TrieNode() : isEndOfWord(false), children(26, nullptr) {}
    };

    

    TrieNode* Root;

    public:
    std::vector<std::string> getSuggestions(std::string partialWord);  // return the known words that start with partialWord
    void insert(std::string word); // add a word to the known words

};