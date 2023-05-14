#include <iostream>
using namespace std;

int main()
{
    char keep_going;

    // Loop as long as keep_going is 'y'
    do {
        // Prompt for whether to stay in loop
        cout << "Keep going? y or n: ";
        cin >> keep_going;
    }
    while (keep_going == 'y');

    // Executed after loop exit
    cout << "Okay bye now!" << endl;
}
