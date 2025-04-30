#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList(){
    this->head = nullptr;
}

LinkedList::LinkedList(int* array, int len){

};

void LinkedList::insertPosition(int pos, int newNum){
    Node* newNode = new Node(newNum);
    //first node
    if ((head == nullptr) || (pos <= 1)){
        this->head = newNode;
        newNode->setLink(nullptr);
        return;
    }

    Node* index_node = head;     
    for (int i = 1;(index_node->getLink() != nullptr) && (i < pos - 1);i++ ){
        index_node = index_node->getLink();         
    }
    
    newNode->setLink(index_node->getLink());
    index_node->setLink(newNode);
};


bool LinkedList::deletePosition(int pos){
    if (this->head = nullptr){
        return false; 
    }

    Node* index_node = head;

    for (int i = 1;(index_node->getLink() != nullptr) && (i < pos - 1);i++ ){
        index_node = index_node->getLink();         
    }

    if ((index_node->getLink() == nullptr)){
        return false;
    }

    Node* node_delete = index_node->getLink();
    index_node->setLink(node_delete->getLink());

    delete node_delete;

    return true;
};


int LinkedList::get(int pos){

    if (pos < 1){
        return std::numeric_limits<int>::max();
    }

    Node* index_node = this->head;

    for (int i = 1; (index_node->getLink() != nullptr) && (i <  - 1); i++ ){
        index_node = index_node->getLink();         
    }

    Node* node_pos = index_node->getLink();
    
    if (node_pos != nullptr){
        int data = node_pos->getData();
        return data;
    }else{
        return std::numeric_limits<int>::max();
    }
};


int LinkedList::search(int target){
    Node* node_index = this->head;
    int i = 1;

    while (node_index->getLink() != nullptr){

        if(node_index->getData() == target){
            return i;
        }

        node_index = node_index->getLink();
        i++;
    }

    return -1;
};


void LinkedList::printList(){
    if (this->head == nullptr){
        return;
    }

    std::cout << "[ ";
    Node* index_node = this->head;
    for (int i = 1; (index_node->getLink() != nullptr) && (i <  - 1); i++ ){
        std::cout << index_node->getData() << " "; 
        index_node = index_node->getLink();
    }

    std::cout << "]";
};