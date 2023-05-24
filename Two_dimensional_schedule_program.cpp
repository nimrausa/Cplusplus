#include <iostream>
using namespace std;
const int HOURS = 12;
const int START = 800;
const int DAYS = 5;
const char HEADERS[] = {'M', 'T', 'W', 'R', 'F'};

int getTime();
int getDay();
void add(int[][HOURS]);
void display(int[][HOURS]);

// This program maintains a daily schedule of courses.
// Users may add a new course to the schedule and view all courses.
// TImes are represented in military format from 800 to 1900 (12 times).
// Internally, times with no courses are represented as 0.
int main() {
    char choice;

    // Declare array and initialize all elements to 0 (no course).
    int schedule[DAYS][HOURS];

    for (int day = 0; day < DAYS; day++) {
        for (int hour = 0; hour < HOURS; hour++) {
            schedule[day][hour] = 0;
        }
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
void add(int schedule[DAYS][HOURS]) {
    int course, day, time;
    cout << "Enter course to add: ";
    cin >> course;
    day = getDay();
    time = getTime();
    // Validate time entered
    if (day < 0 || day >= DAYS) {
        cout << "Not a legal day!" << endl;
    }
    // Validate time entered
    else if (time < 0 || time >= HOURS) {
        cout << "Not a legal time!" << endl;
    }
    else {
        schedule[day][time] = course;
    }

}

// Display all courses in schedule.
void display(int schedule[DAYS][HOURS]) {
    for (int day = 0; day < DAYS; day++) {
        cout << '\t' << HEADERS[day] ;
    }
    cout << endl;
    for (int hour = 0; hour < HOURS; hour++) {
        // Translate index to time for printing
        cout << hour * 100 + START << ": ";
        for (int day = 0; day < DAYS; day++) {

            // Only print value if course exists (that is, not 0)
            if (schedule[day][hour] != 0) {
                cout << schedule[day][hour] << '\t';
            }
            else { // Otherwise print tab to space
                cout << "\t";
            }
        }
        cout << endl;
    }
}

// Translate military time into array index
int getTime() {
    int time;
    cout << "Enter time: ";
    cin >> time;
    return (time - START)/100;
}

// Translate day into array index
int getDay() {
    int day;;
    cout << "Enter Day (Mon=1, Tue=2, Wed=3, Thu=4, Fri=5): ";
    cin >> day;
    return day-1;
}



