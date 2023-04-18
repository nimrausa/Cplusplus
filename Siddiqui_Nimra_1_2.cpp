//NIMRA SIDDIQUI
//ASSIGNMENT:01 PROBLEM:02

#include <iostream>
using namespace std;

// This program counts the number of negative values entered by the user.
int main() {
    int howMany;               // How many numbers will be input
    int inputValue;            // Current number input by user
    int numberOfNegatives = 0; // Running total of negative numbers

    // Prompt for how many values will be entered
    cout << "How many values will you input: ";
    cin >> howMany;
    if(howMany <=0 ){ //if the user put negative value than the for loop will not be executed so, it is important to tell the user
            //to put positive value.
        cout << "Type again and add positive value" << endl;
         cout << "How many values will you input: ";
            cin >> howMany;
    }

    // Loop for that many numbers
    for (int count = 0; count < howMany; count++) {
            //BUG:1 count<howMany instead of count<=howMany since the count start from 0 value .
            //Suppose some one put "How many values will you input:4" , so the count star from 0 to 3  which become equal to 4 .So it should me
            //less than the final value.
        cout << "Enter next value: ";
        cin >> inputValue;

        // If positive increment total
        if (inputValue <0) { //this loop work only if input value is less than 0
                //BUG:2 We are looking input values that are negative which mean less than 0 so we should not put equal sign here.
                //Thus, replacing inputValue <= 0 to inputValue < 0
            numberOfNegatives++;
        }
    }

    cout << "You entered " << numberOfNegatives << " negative numbers" << endl;

    return 0;
}

//Documentation describing the error(s)
//BUG:1 count<howMany instead of count<=howMany since the count start from 0 value .
//Suppose some one put "How many values will you input:4" , so the count star from 0 to 3  which become equal to 4 .So it should me
//less than the final value.
//BUG:2 We are looking input values that are negative which mean less than 0 so we should not put equal sign here.
//Thus, replacing inputValue <= 0 to inputValue < 0
