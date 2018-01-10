#include <iostream>
#include "Stack.h"

using namespace std;

void question3() {
    Stack s;

    s.push('3');
    s.push('4');

    cout << "(d) Get top item of the stack and display - " << s.getTop() << endl;

    s.displayInOrderOfInsertion();
    s.pop();
    s.displayInOrderOfInsertion();
}


int main() {
    question3();
    return 0;
}