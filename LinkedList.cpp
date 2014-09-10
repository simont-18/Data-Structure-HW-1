#include "LinkedList.h"

LinkedList::LinkedList(Node *head):front(head) {}

LinkedList::~LinkedList() {
    if(!isLinkedListEmpty())
        throw EmptyList("The list is not empty.\n");
    delete front;
}

bool LinkedList::isLinkedListEmpty() const {
    return front->next == nullptr;
}

void LinkedList::insertL(int &newData) {
    Node *previous = nullptr, *current = front;
    
    bool sw = true;
    
    Node *temp = new Node;
    temp->data = newData;
    
    while(current != nullptr && sw) {
        if(current->data < newData) {
            previous = current;
            current = current->next;
        }
        else {
            sw = false;
        }
    }
    
    if(previous != nullptr) {
        previous->next = temp;
        temp->next = current;
    } else
        front->next = temp;
}

void LinkedList::deleteL(int &obj) {
    Node *previous = nullptr, *current = front, *nextNode = nullptr;
    
    if(isLinkedListEmpty())
        throw EmptyList("Error: Empty list.\n");
    else {
        bool found = false;
        while(current != nullptr && !found) {
            if(current->data == obj) {
                nextNode =  current->next;
                found = true;
            }
            else {
                previous = current;
                current = current->next;
            }
        }
        if(!found)
            throw NonExistence("Error: Not in the list.\n");
    }
    
    if(nextNode == nullptr) {
        previous->next = nullptr;
    }
    else {
        previous->next = nextNode;
    }
}

void LinkedList::print() const {
    Node *current = front;
    while(current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}