//
// Created by Joe Kawai on 9/12/17.
//

#ifndef WEEK_3_LIST_H
#define WEEK_3_LIST_H

#include <string>

using namespace std;

typedef string ItemType;

class List {
private:
    struct Node {
        ItemType item;
        Node *next;
    };

    Node *firstNode;
    int size;

public:
    List();

    ~List();

    bool add(ItemType item);

    bool add(int index, ItemType item);

    bool remove(int index);

    ItemType get(int index);

    bool isEmpty();

    int getLength();

    void print();
};


#endif //WEEK_3_LIST_H
