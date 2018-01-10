#include <iostream>

using namespace std;

int main() {
    cout << "Enter a digit: ";

    string digit;
    cin >> digit;

    for(int i = 0; i < digit.size(); i++) {
        cout << digit[i] << " ";
    }

    cout << endl;

    return 0;
}