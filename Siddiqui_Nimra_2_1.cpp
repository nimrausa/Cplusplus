//NIMRA SIDDIQUI
//ASSIGNMENT:02 PROBLEM:01



//Test cases
// flight=91 , output=True
// flight=109 , output=True
// flight= 114 , output = false
// flight=0  , Output=False
// flight=117 , Output=False
// flight=105, Output=True


// This program is the Function driver for the "between" function.
// In the given program, there was an error in the "between" function.
//The given code did not return the correct value. So the function needed to be corrected.

// I used the following value to test the program
// If it falls within 10 meters of the target than it should hit the target
 // flight = sin(2 * angle)*velocity*velocity/9.8; for angle= 30  and velocity=40 m/s
 //flight=141.3919 which is not within the 10 meter of the range of target but it still give hit.
 // flight = sin(2 * angle)*velocity*velocity/9.8; for angle= 90  and velocity=45 m/s
 //flight=0 which is not within the 10 meter of the range of target but it still give hit.
// flight =114,  output=Hit
// flight= 0,  output=Hit
// So, it clearly implies that between function is not working properly
//  because the flight was not within (+10) and (-10) meter of the distance(100)  but it still returned "HIT" value

// By changing the between function so it give "TRUE" value when it falls within the range

#include <iostream>
#include <cmath>
using namespace std;

bool between(double, double, double); // function decleration of minval , maxval and value using bool function to give "true" or "false"


int main() {
    double distance = 100; // fixed target value
    double flight; //for the distance that the ballons will travel
    //prompt user to input the distance that the ballons will travel
    cout<<"Enter a target value"<<endl;
    cin >>flight;

    // function is called by passing three arguments which return either true or false
    if (between(distance - 10, distance + 10, flight)) {
        cout << "True falls within the range of target" << endl;  //if the travelling distance is within within (+10) and (-10) meter range of target(100m)
    }
    else
    {
        cout << "False not falls within the range of target" << endl;//if the travelling distance is not within within (+10) and (-10) meter meter range of target(100m)
    }
    return 0;
}

// This function takes a minimum, maximum and a value as parameters.
//for the minimum value (distance - 10)
//For the maximum value  (distance + 10)
// It returns true if the value is within the range of minimum(inclusive) and maximum(inclusive),
// false otherwise.
bool between(double minval, double maxval, double value) {
    if (value >= minval &&value<=maxval) {
        return true;
    }

    else {
        return false;
    }
}
