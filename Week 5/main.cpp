#include <iostream>
#include "Queue.h"

void question5() {
    Queue q;

    q.enqueue('a');
    q.enqueue('b');

    char character;
    q.getFront(character);
    cout << character << endl;

    q.displayItems();
    q.dequeue();
    q.displayItems();
}

bool getLastElement(Queue& aQueue, ItemType& item) {
    if(aQueue.isEmpty())
        return false;

    item = aQueue.getBackNode()->item;

    return true;
}

int main() {
    question5();
    return 0;
}

/*
 * Question 3 (c)
 *
 * If the pointer-based implementation of ADT Queue does not come with a backnode, it will be required to go though
 * O(n) time complexity before reaching the final node to enqueue any new objects.
 */