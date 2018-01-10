//
// Created by Joe Kawai on 10/12/17.
//

#include "Queue.h"

Queue::Queue() {
    frontNode = NULL;
    backNode = NULL;
}

Queue::~Queue() {
    Node *temp;
    while(frontNode) {
        temp = frontNode;
        frontNode = frontNode->next;
        delete temp;
    }
}

bool Queue::enqueue(ItemType item) {
    Node *newNode = new Node;
    newNode->item = item;
    newNode->next = NULL;

    if(isEmpty()) {
        frontNode = newNode;
        backNode = newNode;
    } else {
        backNode->next = newNode;
        backNode = newNode;
    }
    return true;
}

bool Queue::enqueueByReference(ItemType &item) {
    Node *newNode = new Node;
    newNode->item = item;
    newNode->next = NULL;

    if(isEmpty()) {
        frontNode = newNode;
        backNode = newNode;
    } else {
        backNode->next = newNode;
        backNode = newNode;
    }
    return true;
}

bool Queue::dequeue() {
    if(!isEmpty()) {
        Node *temp = frontNode;
        frontNode = frontNode->next;
        delete temp;
        return true;
    }
    return false;
}

bool Queue::dequeue(ItemType &item) {
    if(!isEmpty()) {
        Node *temp = frontNode;
        item = temp->item;
        frontNode = frontNode->next;
        delete temp;
        return true;
    }
    return false;
}

void Queue::getFront(ItemType &item) {
    if(!isEmpty()) {
        item = frontNode->item;
    }
}

bool Queue::isEmpty() const {
    return frontNode == NULL && backNode == NULL;
}

void Queue::displayItems() {
    int count = 0;
    Node *temp = frontNode;
    while(temp) {
        cout << ++count << " - " << temp->item << endl;
        temp = temp->next;
    }
    cout << "---------------" << endl;
}

Queue::Node *Queue::getBackNode() const {
    return backNode;
}

int Queue::getNoOfElements() {
    int count = 0;
    Node *temp = frontNode;
    while(temp) {
        count++;
        temp = temp->next;
    }
    return count;
}
