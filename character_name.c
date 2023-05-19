#include <iostream>
using namespace std;

char *getName();

int main() {
    char *first = new char[12]; // Dynamically allocate space for array of 12 chars
    cout << "Address of first: " << &first << endl;

    cout << "Enter your first name: ";
    cin >> first;

    cout << "Enter your last name: ";
    char *last = getName(); // last is address of memory dynamically allocated in function
    cout << "Hello " << first << " " << last << "!" << endl;

    delete first;
    cout << "Hello " << first << " " << last << "!" << endl;

}

// Function dynamically allocates memory for a string of chars
// and then returns a pointer to that memory (making it available
// even after return from function).
char *getName() {
    char *name = new char[12];
    cin >> name;
    return name;
}

