#include <iostream>
#include "LinkedList.h"

using namespace std;

int getUseri(const string prompt);
void insertData(LinkedList *o);
void deleteData(LinkedList *o);


int main() {
    Node *head = new Node;
    LinkedList *list = new LinkedList(head);
    
    try {
        insertData(list);
        if(!list->isLinkedListEmpty())
            deleteData(list);
        else
            throw EmptyList("Error: Empty List.\n");
    } catch(...) {
        cout << "Error\n";
    }
    return 0;
}

void insertData(LinkedList *o) {
    int i;
    while(i != -100) {
        i = getUseri("Please enter a number (-999 to stop inserting): ");
        if(i != -100) {
            o->insertL(i);
            cout << i << " has been inserted into the list.\n";
        }
    }
    if(!o->isLinkedListEmpty())
        o->print();
}

void deleteData(LinkedList *o) {
    int i;
    while(i != -100) {
        i = getUseri("Please enter a number (-999 to stop deleting): ");
        if(i != -100) {
            o->deleteL(i);
            cout << i << " has been deleted from the list.\n";
        }
    }
    o->print();
}

int getUseri(const string p) {
    int i;
    cout << p;
    cin >> i;
    if(cin.fail())
        throw NotAnInteger("Error: Not an interger.\n");
    return i;
}