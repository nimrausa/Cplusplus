#include <iostream>
using namespace std;

// This program prompts for basic file commands
int main()
{
     char answer; // Store user answer at each stage

     // Give options and prompt for choice
     cout << "New file (n), Open file (o), or save file (s): ";
     cin >> answer;

     switch (answer) { // Branch on answer

        case 'n':
        case 'N':
            cout << "New file created" << endl;
            break;

        case 'o':
        case 'O':
            cout << "File opened" << endl;
            break;

        case 's':
        case 'S':
            cout << "File saved" << endl;
            break;

        default:
            cout << "Not a legal command" << endl;
     }
}
