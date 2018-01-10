//
// Created by Joe Kawai on 10/12/17.
//

#ifndef WEEK4_STACK_H
#define WEEK4_STACK_H

#include <string>
#include <iostream>

using namespace std;

typedef char ItemType;

class Stack {

private:
    struct Node {
        ItemType item;
        Node *next;
    };

    Node *topNode;

public:
    Stack();

    ~Stack();

    bool isEmpty();

    bool pushByReference(ItemType &item);

    bool push(ItemType item);

    bool pop();

    bool pop(ItemType &item);

    void getTop(ItemType &item);

    ItemType getTop();

    void displayInOrder();

    void displayInOrderOfInsertion();
};


#endif //WEEK4_STACK_H
