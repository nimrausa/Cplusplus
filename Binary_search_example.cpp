#include <iostream>
#include <time.h>
#include <algorithm>
using namespace std;
const int LENGTH = 12;

void setRandom(int[]);
void printArray(int[]);
int binarySearch(int[], int);

int main() {
    int target;
    int where;

    srand(time(0));

    int values[LENGTH];
    setRandom(values); // Generate array of random values
    cout << "Original array: ";
    printArray(values);

    // Call to sort algorithm (in <algorithm> library).
    // This function sorts all elements of an array from start to some limit.
    // We use the array as the start location, and sort up to that position
    // plus the length of the array.
    sort(values, values+LENGTH);

    cout << "Sorted array: ";
    printArray(values);

    // Now use binarySearch function below to search for values.
    while (true) {
        cout << "Enter value to search for: ";
        cin >> target;
        where = binarySearch(values, target);
        if (where != -1) {
            cout << "Found at index " << where << endl;
        }
        else {
            cout << "Not found" << endl;
        }
    }
}

void setRandom(int values[]) {
    for (int index = 0; index < LENGTH; index++) {
        values[index] = rand() % 100;
    }
}

void printArray(int values[]) {
    for (int index = 0; index < LENGTH; index++) {
        cout << values[index] << ' ';
    }
    cout << endl;
}

// This function uses binary search to find a given target vale in a sorted array.
// It returns the index of that target, or -1 if it is not is the array.
int binarySearch(int values[], int target) {
    int bottom = 0;     // Initial values for top and bottom
    int top = LENGTH-1; // Are the first and last array element
    int mid;            // Index of middle value in current search range
    while (top > bottom) { // If the top and bottom converge the value is no tin the array
        mid = bottom + (top - bottom)/2; // Compute index in middle of current range
            cout << "Bottom: " << bottom << " Top: " << top << " Mid: " << mid << endl;
        if (values[mid] == target) {
            return mid; // Target found so return its index
        }
        else if (values[mid] > target) {
            top = mid - 1; // Target in lower half, so top now below current mid
        }
        else {
            bottom = mid + 1; // Target in upper half, so bottom now above current mid
        }
    }
    return -1; // Top == bottom but not found.
}
