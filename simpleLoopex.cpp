#include <iostream>
using namespace std;

int main()
{
    // Make sure loop condition true initially
    char keep_going = 'y';

    // Loop as long as keep_going is 'y'
    while (keep_going == 'y') {

        // Prompt for whether to stay in loop
        cout << "Keep going? y or n: ";
        cin >> keep_going;
    }

    // Executed after loop exit
    cout << "Okay bye now!" << endl;
}
