//
// Created by Joe Kawai on 10/12/17.
//

#include "Stack.h"

Stack::Stack() { topNode = NULL; }

Stack::~Stack() {
    while(topNode != NULL) {
        Node *temp = topNode;
        topNode = topNode->next;

        delete temp;
    }
}

bool Stack::isEmpty() {
    return topNode == NULL;
}

bool Stack::pushByReference(ItemType &item) {
    Node *newNode = new Node;
    newNode->item = item;
    newNode->next = topNode;

    topNode = newNode;
    return true;
}

bool Stack::push(ItemType item) {
    Node *newNode = new Node;
    newNode->item = item;
    newNode->next = topNode;

    topNode = newNode;
    return true;
}

bool Stack::pop() {
    if(!isEmpty()) {
        Node *temp = topNode;
        topNode = topNode->next;

        temp->next = NULL;
        delete temp;
        return true;
    }
    return false;
}

bool Stack::pop(ItemType &item) {
    if(!isEmpty()) {
        Node *toPop = topNode;
        topNode = toPop->next;
        item = toPop->item;
        delete toPop;
        return true;
    }
    return false;
}

void Stack::getTop(ItemType &item) {
    if(!isEmpty())
        item = topNode->item;
}

ItemType Stack::getTop() {
    if(!isEmpty())
        return topNode->item;
}

void Stack::displayInOrder() {
    int count = 0;
    Node *temp = topNode;
    while(temp) {
        cout << ++count << " - " << temp->item << endl;
        temp = temp->next;
    }
    cout << "---------------" << endl;
}

void Stack::displayInOrderOfInsertion() {
    Stack tempStack;
    Node *temp = topNode;
    while(temp) {
        tempStack.pushByReference(temp->item);
        temp = temp->next;
    }

    tempStack.displayInOrder();
}
