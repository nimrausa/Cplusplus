#include <iostream>
#include <time.h>
using namespace std;
void player_choice(int , int, int );
char throw_net();

// This program plays a simple game in which the player is repeatedly presented
// with Pokemon, and ask if they want to try to capture them with a net or
// freeze ray. Success or failure of the capture is based on either speed or
// strength of the Pokemon, compared with a random value. The number of Pokemon
// captured is printed at the end.
int main()
{
    srand(time(0)); // Set random seed based on time

    const int p_1_strength = 7; // Strength of my first Pokemon
    const int p_1_speed = 3;    // Speed of my first Pokemon


    int strength, speed;  // Speed and strength of current Pokemon
    char choice;   // Choice entered by user (n or f)

    // Compute how many turns the game will run.
    int turns = (p_1_strength + p_1_speed )/2;
     int captured = 0; // Running total for Pokemon captured
     player_choice(turns, p_1_strength, p_1_speed );

}

    // Loop for number of turns computed
    void player_choice(int turns, int strength, int speed){
    for (int turn = 0; turn < turns; turn++) {

        // Use a random value (either 0 or 1) to determine the Pokemon for this turn
        // Print the Pokemon name, and then set the current speed and strength to those
        // of that Pokemon.

            cout << "You see a Bulbasaur!" << endl;


        // Prompt player whether to use net or freeze ray
        cout << "Use a net (n) or a freeze ray (f): ";
        cin >> choice;

        // Keep prompting until a legal value (n or f) is entered
        while (choice != 'n' && choice != 'f') {
            cout << "Enter n or f: ";
            cin >> choice;
        }
    }
    return choice;
    }

        // Switch based on net or freeze ray
        switch (choice) {
            case 'n':
                char throw_net{
                // If net, capture based on speed. Roll random number between 1 and 10 and compare to speed
                if (rand() % 10 >= speed) { // If successful, print message and add to total captured
                    cout << "The pokemon is caught in the net!" << endl;
                    return captured++;
                }
                else {
                    cout << "The pokemon dodged the net!" << endl;
                }
                 break;
                }

            case 'f':
                char freeze_ray{
                // If freeze, capture based on strength. Roll random number between 1 and 10 and compare to strength
                if (rand() % 10 >= strength) { // If successful, print message and add to total captured
                    cout << "The pokemon is frozen in place!" << endl;
                    return captured++;
                }
                else {
                    cout << "The pokemon broke free of the ice!" << endl;
                }
                break;
        }
        }


    // Display running total of Pokemon captured at end of program
    cout << "You captured " << captured << " Pokemon!" << endl;
