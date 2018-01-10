#include <iostream>

using namespace std;

static int comparisons = 0;

// Question 1
int search(int dataArray[], int arraySize, int target) {
    for(int i = 0; i <= arraySize; i++) {
        // Question 5
        comparisons++;
        if(dataArray[i] == target) return i;
    }
    return -1;
}

// Question 3
int binarySearch(int array[], int size, int target) {
    int first = 0;
    int last = size - 1;

    while (first <= last) {
        int mid = (first + last) / 2;
        comparisons++;
        if (array[mid] == target) {
            cout << "Found" << endl;
            return mid;
        } else {
            if(target < array[mid]) {
                last = mid-1;
            } else {
                first = mid+1;
            }
        }
    }

    if (array[first] == target) {
        cout << "Found" << endl;
        return first;
    }

    cout << "Not Found" << endl;
    return -1;
}

// Question 8
int search(int dataArray[], int arraySize, int start, int target) {
    if(start == arraySize) {
        return -1;
    } else {
        if (dataArray[start] == target) {
            return start;
        } else {
            return search(dataArray, arraySize, start+1, target);
        }
    }
}

// Question 9
int binarySearch(int dataArray[], int first, int last, int target) {
    if (first > last) {
        return -1;
    } else {
        int mid = (first + last) / 2;
        if (dataArray[mid] == target) {
            return mid;
        } else {
            if(target < dataArray[mid]) {
                return binarySearch(dataArray, first, mid-1, target);
            } else {
                return binarySearch(dataArray, mid+1, last, target);
            }
        }
    }
}

int main() {

    cout << "Question 2" << endl;
    // Question 2
    int dataArray[1000];
    int target;
    for(int i = 1; i <= 1000; i++) {
        dataArray[i] = i * 2;
    }
    cout << "Enter a number: ";
    cout.flush();
    cin >> target;

    if(search(dataArray, 1000, target) == -1) {
        cout << target <<" Not Found" << endl;
    } else {
        cout << target <<" Found" << endl;
    }


    cout << "\nQuestion 6" << endl;
    // Question 6
    comparisons = 0;
    int idx1 = search(dataArray, 1000, target);
    cout << "Sequential Search: " << comparisons << endl;

    comparisons = 0;
    int idx2 = binarySearch(dataArray, 1000, target);
    cout << "Binary Search: " << comparisons << endl;

    return 0;
}