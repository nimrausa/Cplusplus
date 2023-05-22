#include <iostream>
#include <cstring>
using namespace std;
const int MAX = 20;

void reverse(char[]);

int main() {
    // Create array of chars without end marker
    char name1[] = {'J', 'o', 'h', 'n'};
    cout << name1 << endl;
    // Create array of chars with end marker
    char name2[] = {'J', 'o', 'h', 'n', '\0'};
    cout << name2 << endl;
    // Create array of chars as string literal (end marker automatically added)
    char name3[] = "John";
    cout << name3 << endl;

    // Create array of up to 20 chars
    char name4[MAX];
    cout << "What is your name? ";
    cin >> name4; // Read into the array
    cout << "Hello " << name4 << endl;
    // Use strlen to get length of chars
    cout << "Your name is " << strlen(name4) << " letters long" << endl;
    reverse(name4); // Call reverse function
    cout << "The reverse of your name is " << name4 << endl;
}

// This function takes a string and reverses it
void reverse(char name[]) {
    char temp; // Use for swapping characters
    int length = strlen(name); // Get length of string
    // Loop until reach middle of string
    for(int index = 0; index < length/2; index++) {
        temp = name[index]; // Store character at index
        // Copy character from corresponding index in second half
        name[index] = name[length-index-1];
        // Store temp character into second half
        name[length-index-1] = temp;
    }
}

