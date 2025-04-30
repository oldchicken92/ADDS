#include "Node.h"

Node::Node(int value){
    this->data = value;
    this->link = nullptr;
}

void Node::setData(int value){
    this->data = value;
}

int Node::getData(){
    return this->data;
}

void Node::setLink(Node* next){
    this->link = next;
}

Node* Node::getLink(){
    return this->link;
}