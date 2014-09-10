#ifndef ___320_Programming_Assignment__LinkedList__
#define ___320_Programming_Assignment__LinkedList__
#include "Node.cpp"
#include "EmptyList.cpp"
#include "NonExistence.cpp"
#include "NotAnInteger.cpp"
#include <iostream>

class LinkedList {
public:
    LinkedList(Node *head);
    ~LinkedList();
    void insertL(int &obj);
    void deleteL(int &obj);
    bool isLinkedListEmpty() const;
    void print() const;
private:
    Node *front ;
};


#endif