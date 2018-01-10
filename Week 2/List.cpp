//
// Created by Joe Kawai on 9/12/17.
//

#include "List.h"

using namespace std;

List::List() {
    size = 0;
}

bool List::add(Person newItem) {
    bool success = size < MAX_SIZE;
    if (success) {
        items[size] = newItem;
        size++;
    }
    return success;
}

bool List::add(int index, Person newItem) {
    bool success = (index >= 1) && (index <= size + 1) && (size < MAX_SIZE);
    if (success) {
        for (int pos = size; pos >= index; pos--)
            items[pos] = items[pos-1];
        items[index-1] = newItem;
        size++;
    }
    return success;
}

void List::remove(int index) {
    bool success = (index >= 1) && (index <= size);
    if (success) {
        for (int fromPosition = index + 1; fromPosition <= size; fromPosition++)
            items[fromPosition - 2] = items[fromPosition - 1];
        size--;
    }

}

Person List::get(int index) {
    index--;
    return items[index];
}

bool List::isEmpty() {
    return size == 0;
}

int List::getLength() {
    return size;
}

void List::display() {
    for (int i=1; i<=getLength(); i++) {
        Person item = get(i);
        //cout << item << endl;
    }
}

void List::replace(int index, Person item) {
    bool success = index >= 1 && index <= getLength();
    if (success)
        items[index-1] = item;
}
