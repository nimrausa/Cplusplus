//NIMRA SIDDIQUI
//ASSIGNMENT:02 PROBLEM:04



#include <iostream>
using namespace std;
const int SIZE = 12; //size of an array
const int START = 800; //starting time of a schedule

//the declaration if the function
int getTime(); // return integer and does not take any parameter
void add(int[]); // return void and takes array of integer as an parameter
void display(int[]); // return void and takes array of integer as an parameter

// This program maintains a daily schedule of courses.
// Users may add a new course to the schedule and view all courses.
// TImes are represented in military format from 800 to 1900 (12 times).
// Internally, times with no courses are represented as 0.
int main() {
    char choice;

    //Declare array and initialize all elements to 0 (no course).
    int schedule[SIZE];
    for (int index = 0; index < SIZE; index++) {
        schedule[index] = 0;
    }

    // Initially we just loop forever. This will be upgraded to allow a quit option.
    // We will also add an option to allow courses to be dropped.
    while (true) {
        cout << "Add course (a) or View courses (v): ";
        cin >> choice;

        switch (choice) {
            case 'a':
                add(schedule);
                break;
            case 'v':
                display(schedule);
                break;
            default:
                cout << "That is not a legal option." << endl;
        }
    }
}

// This prompts for a course number to add and a time to add it.
void add(int schedule[]) {
    int course, time;
    int registered=0; // to determine the registration status of the course,
    //0 means course has not already been registered
    //1 means course has been already registered
    cout << "Enter course to add: ";  //ask  user to input the course
    cin >> course;

    for(int i=0;i<SIZE; i++)
        {
            if(schedule[i]==course) //if course is already registered
            {
                 registered=1;  //registered=1 , if course has already been registered

            }
        }
        if(registered==1) //if the course has already been registered
        {

             cout<<"You are already registered for that course!" <<endl; //if the given course are already registered than the this message will
            //print
        }


        // if course is not registered already
        else{

    time = getTime();
    // Validate time entered
    if (time < 0 || time >= SIZE) {
        cout << "Not a legal time!" << endl;
    }
    else {

        schedule[time] = course;  //addition of the new course in the entered time
    }
}
}

// Display all courses in schedule.
void display(int schedule[]) {
    int total=0; // for counting total courses taken

    // to print the value of array
    for (int index = 0; index < SIZE; index++) {
        // Translate index to time for printing
        cout << index * 100 + START << ": ";
        // print value only if course exists
        if (schedule[index] != 0) {
            total=total+1; //increment the total by 1
            cout << schedule[index];   //to display value of array index
        }
        cout << endl;
    }

    cout<< "You are currently taking "<<total<< " courses " <<endl;   //the total number of the course the user is taking
}

// Translate military time into array index
int getTime() {
    int time;
    cout << "Enter time: ";   // prompt user for a time
    cin >> time;
    return (time - START)/100;    //time is converted into array index and is returned to the called function
}

