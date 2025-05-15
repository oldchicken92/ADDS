#include "PrefixMatcher.h"

int PrefixMatcher::selectRouter(std::string networkAddress){
    TrieNode* current = this->root;
    int bestRoute = -1;

    for (size_t j = 0; j < networkAddress.size(); j++){
        char byte = networkAddress[j];
        int byte_index = byte - '0';

        if (current->endAddress == true){
            bestRoute = current->router_num;
        }

        if (current->children[byte_index] == nullptr){
            break;
        }

        current = current->children[byte_index];
    }

    if (current->endAddress) {
        bestRoute = current->router_num;
    }

    return bestRoute;

}  // return the router with the longest matching prefix



void PrefixMatcher::insert(std::string address, int routerNumber){
    TrieNode* node = this->root;

    for (size_t i = 0; i < address.size(); i++){
        char byte = address[i];
        int byte_index = byte - '0';
        if (node->children[byte_index] == nullptr){
            node->children[byte_index] = new TrieNode;
        }

        node = node->children[byte_index];
    }
    
    node->endAddress = true; //end
    node->router_num = routerNumber; 

} // add a router address