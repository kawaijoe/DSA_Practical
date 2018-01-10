//
// Created by Joe Kawai on 10/12/17.
//

#ifndef WEEK_5_QUEUE_H
#define WEEK_5_QUEUE_H

#include <iostream>
#include <string>

typedef char ItemType;

using namespace std;

class Queue {
private:
    struct Node {
        ItemType item;
        Node *next;
    };

    Node *frontNode;
    Node *backNode;

public:
    Queue();

    ~Queue();

    bool isEmpty() const;
    bool enqueue(ItemType item);
    bool enqueueByReference(ItemType &item);
    bool dequeue();
    bool dequeue(ItemType& item);
    void getFront(ItemType& item);
    void displayItems();
    int getNoOfElements();

    Node *getBackNode() const;
};


#endif //WEEK_5_QUEUE_H
