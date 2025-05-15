#ifndef PRE_H
#define PRE_H

#include <string>
#include <iostream>
#include <vector>

class PrefixMatcher {

    private:

    struct TrieNode
    {
        bool endAddress; 
        std::vector<TrieNode*> children;
        int router_num; 

        TrieNode() : endAddress(false) , children(2, nullptr) , router_num(-1) {} //binary choice
    };
    
    TrieNode* root; 

    public:

    int selectRouter(std::string networkAddress);  // return the router with the longest matching prefix
    void insert(std::string address, int routerNumber); // add a router address
    
    PrefixMatcher(){root = new TrieNode;}

};

#endif