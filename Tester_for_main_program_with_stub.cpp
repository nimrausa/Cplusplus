#include <iostream>
#include <time.h>
using namespace std;

void play_game();

// This program repeatedly plays "rock paper scissors".
// The player is prompted for their choice, and the computer
// them makes a random choice. On a tie, the player and computer
// are asked again.
int main() {
    char keep_playing = 'y';
    srand(time(0));

    // Keep playing as long as player enters y to continue
    while (keep_playing == 'y') {

        // Call function to pay individual game
        play_game();

        cout << "Play another game? (y or n): ";
        cin >> keep_playing;
    }
}

// This function plays an individual game
void play_game() {
    cout << "play_game function called" << endl;
}

