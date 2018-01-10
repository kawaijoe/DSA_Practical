#include <iostream>

using namespace std;

// Question 1
long power(int a, int n) {
    if(n == 0) {
        return 1;
    } else {
        return a * power(a, n - 1);
    }
}


// Question 2
int maxArray(const int anArray[], int n) {
    int index = n - 1;
    if(index == 0) {
        return anArray[index];
    } else {
        return max<int>(anArray[index], maxArray(anArray, index));
    }
}

int main() {
    std::cout << power(3, 3) << std::endl;

    int array[5] = {5, 7, 12, 31, 1};
    std::cout << maxArray(array, 5) << std::endl;
    return 0;
}