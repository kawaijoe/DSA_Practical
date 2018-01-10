//
// Created by Joe Kawai on 9/12/17.
//

#ifndef WEEK_2_LIST_H
#define WEEK_2_LIST_H

#include "Person.h"
#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

class List {
public:

    List();

    bool add(Person newItem);

    bool add(int index, Person newItem);

    void remove(int index);

    void display();

    void replace(int index, Person item);

    Person get(int index);

    bool isEmpty();

    int getLength();

private:
    Person items[MAX_SIZE];

    int size;

};


#endif //WEEK_2_LIST_H
