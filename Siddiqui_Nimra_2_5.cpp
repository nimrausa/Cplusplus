//NIMRA SIDDIQUI
//ASSIGNMENT:02 PROBLEM:05

#include <iostream>
#include <time.h>
#include <string>
using namespace std;
char action();
int net(int speed);
int freeze(int strength);

// Your function prototypes go here.

int main()

{
    int arr[10] = {1,0,1,1,0,0,1,1,1,0};
    srand(time(0)); // Set random seed based on time

    const int creation = 3;  // strength of Charmander

    string name = "Charmander"; // Enter your Pokemon name here
    char choice;           // Choice entered by user

    // Counts will analyze how many times the program will run

    int captured = 0; // Running total for Pokemon captured

    // Loop for number of turns computed
     for(int i=0;i<10;i++)
    {
      arr[i]+ = rand() % 10
    }

    int x = 0;
    int s;
    while(x==0)
    {
        cout<<"What room do you want to search in";
        cin>>s;
        if(s>=0 && s<10)
        {
            if(arr[s]>0)
            {
                cout<<"There are "<<arr[s]<<" "<<st[s]<<" in that room";
            }
            else
            {
                cout<<"There are no"<<st[s]<<" in that room";
            }
        }
        else
        {
            cout<<"That is not a legal room in that number";
        }
    }
}




