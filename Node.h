#ifndef NODE_H
#define NODE_H

class Node{
    private:
    int data;
    Node* link;

    public:
    Node(int value);

    void setData(int value);
    int getData();

    void setLink(Node* next);
    Node* getLink();
};

#endif