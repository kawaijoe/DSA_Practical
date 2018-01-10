//
// Created by Joe Kawai on 9/12/17.
//

#include "List.h"
#include <iostream>

using namespace std;

List::List() { size = 0; }

List::~List() {
    Node *removeNode = firstNode;
    for(int i = 1; i < size; i++) {
        removeNode = removeNode->next;
        delete removeNode;
    }
    delete firstNode;
}

bool List::add(ItemType item) {
    Node *newNode = new Node();
    newNode->item = item;
    newNode->next = NULL;

    if(isEmpty()) {
        firstNode = newNode;
    } else {
        Node *temp = firstNode;
        for(int i = 1; i < size; i++) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    size++;
    return true;
}

bool List::add(int index, ItemType item) {
    if(index-1 <= size && index > 0) {
        Node *newNode = new Node();
        newNode->item = item;
        newNode->next = NULL;

        if(size == 0) {
            firstNode = newNode;
        } else {
            if(index == 1) {
                newNode->next = firstNode;
                firstNode = newNode;
            } else {
                Node *temp = firstNode;

                for(int i = 1; i < index-1; i++) {
                    temp = temp->next;
                }

                newNode->next = temp->next;
                temp->next = newNode;
            }
            size++;
        }
        return true;
    }
    return false;
}

bool List::remove(int index) {
    if(index <= size && index > 0) {
        Node *toRemove;
        if(index == 1) {
            toRemove = firstNode;
            firstNode = firstNode->next;
        } else {
            Node *temp = firstNode;
            for(int i = 1; i < index-1; i++) {
                temp = temp->next;
            }
            toRemove = temp->next;
            temp->next = toRemove->next;
        }
        delete toRemove;
        size--;
        return true;
    }
    return false;
}

ItemType List::get(int index) {
    Node *temp = firstNode;
    for(int i = 1; i < index; i++) {
        temp = temp->next;
    }
    return temp->item;

}

bool List::isEmpty() {
    return size == 0;
}

int List::getLength() {
    return size;
}

void List::print() {
    Node *temp = firstNode;
    for(int i = 1; i <= size; i++) {
        cout << i << " - " << temp->item << endl;
        temp = temp->next;
    }
    cout << "---------------" << endl;
}