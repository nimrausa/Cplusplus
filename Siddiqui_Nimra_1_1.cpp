//NIMRA SIDDIQUI
//ASSIGNMENT:01 PROBLEM:01

#include <iostream>  //Standard Input-Output Streams Library
using namespace std;

// This program prompts for two points (x1,y1) and (x2,y2)
// and computes the slope of the line defined by those points.
int main() { //function needs to return some integer at the end of the execution generally return 0  for the “successful execution of the program”.
    float x1, x2, y1, y2;  //BUG:1 to read the value in the decimal the float is added then only it is able to calculate decimal answer.
    float slope;

    // Prompt for coordinates of first point
    cout << "Enter x coordinate of first point: ";  //Standard output stream
    cin >> x1;    //Standard input stream
    cout << "Enter y coordinate of first point: ";
    cin >> y1;

    // Prompt for coordinates of second point
    cout << "Enter x coordinate of second point: ";
    cin >> x2;
    cout << "Enter y coordinate of second point: ";
    cin >> y2;

    // Compute and print slope

    if ((x2 - x1) != 0){    //"If" implies if condition is true than only loop run otherwise "else" will be run
            //suppose the denominator become 0 than the slope will be not defined so it is better to put a condition
            //where we can not able to get the value of slope or it become undefined
    slope = (y1 - y2 )/(x1 - x2); //BUG:2 in c++ division operator "/" is of higher level precedence than the subtraction operator. So, if we need to
    //calculate line slope we must enclose them within parentheses.Since parentheses have higher level of precedence than arithmetic operator.
    //If we would not include parentheses than division would take place before subtraction and we would get wrong answer.
    cout << "The slope of line formed by those points is " << slope << endl;
    }
    else {
        cout<<"The slope is infinite."<< endl;
    }
    return 0;
    }
//Documentation describing the error(s)
//BUG:1 to read the value in the decimal the float is added then only it is able to calculate decimal answer.
//BUG:2 in c++ division operator "/" is of higher level precedence than the subtraction operator. So, if we need to
//calculate line slope we must enclose them within parentheses.Since parentheses have higher level of precedence than arithmetic operator.
//If we would not include parentheses than division would take place before subtraction and we would get wrong answer.



