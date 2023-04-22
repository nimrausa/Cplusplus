//NIMRA SIDDIQUI
//ASSIGNMENT:01 PROBLEM:05

#include <iostream>
using namespace std;

// This program totals integers from 1 to
// some value given by the user
int main()
{
    int total = 0; // Running total
    int limit; // Sum from 1 to this

    // Prompt for limit
    cout << "Enter maximum value (must be at least 1): ";
    cin >> limit;

    // Loop from 1 to that limit (including limit)
    for (int count = 1; count <= limit; count++) {
            for(int i=1; i<=count ; i++){//nested loop is used that is starting from 1 every time and ending to the loop count
                    //for instance if the loop is working third time than it start from 1 and end to 3

        total = total + i;  //Here to calculate the total : 1 + (1+2) + (1+2+3) + (1+2+3+4) + (1+2+3+4+5) = 35.
        //At first total is 0 and with each iteration of inner loop the total will change.
        //total =0+1
        //total=1+(1+2)
        // ........total=20+(1+2+3+4+5)
            }
    }

    // Display result
    cout << "The sum of all integers up to " << limit << " is " << total;
}
