//NIMRA SIDDIQUI
//ASSIGNMENT:01 PROBLEM:04


#include <iostream>
using namespace std;

int main()
{
    // Generate random number between 1 and 10
    int correct = 7;
    int guess;

    // Prompt for first guess
    cout << "Enter a guess between 1 and 10: ";
    cin >> guess;

    // Loop as long as guess incorrect


        // Prompt for next guess

int count=0;

    // Loop as long as guess incorrect


        // Prompt for next guess

while (guess != correct && count<=2) {  // it will be only run if the guess is incorrect and it will run up to two times

            if(count==2 && guess !=7){//if the guess is incorrect and it already run three time before
                cout << "You are out of guesses!" << endl;

                    }

                    else{
                cout << "That was not correct. Guess again: ";
                cin >> guess;
                    }
       count++;

}
    if(guess==7){ // onlu run if guess=7
    cout << "That is correct!" << endl;
    }

}

