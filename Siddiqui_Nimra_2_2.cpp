//NIMRA SIDDIQUI
//ASSIGNMENT:02 PROBLEM:02 Function Debugging


// In this program even after pouring the water from Bucket1 to Bucket2 the the value is not updated it is showing the previous value
// In order to update the gallons of water in bucket1 and bucket2 we need to pass the address through function



#include <iostream>
#include <cmath>
using namespace std;

void pour(double &, double &, double &, double &); //function "pour" that takes address of 4 double variables

int main() {
    double capacity1 = 5;  //capacity of bucket 1
    double bucket1 = 4;   //water in bucket1 in gallons
    double capacity2 = 3; //capacity of bucket 2
    double bucket2 = 1;   //water in bucket2 in gallons
    double gallons=4;    // gallons of water that will be poured from bucket 1 to bucket 2

    cout << bucket1 << " gallons in bucket 1, " << bucket2 << " gallons in bucket 2" << endl;
    cout << "Going to pour 4 gallons from bucket 1 into bucket 2" << endl;
    pour(bucket1, bucket2, capacity2, gallons);  //function is called now it will go to "pour" function to update the new value of bucket1
    //and bucket2 after pouring . To update the value without using global variable,.So,address is passed after the function complete
    //it task it will return the updated value after pouring



    cout << bucket1 << " gallons now in bucket 1, " << bucket2 << " gallons now in bucket 2" << endl;//updated value of bucket1 and bucket2
    //after pouring

    return 0;
}

// This function pours an amount of water from one bucket to another.
//   bucket1: The amount of water in the bucket we are pouring from.
//   bucket2: The amount of water in the bucket we are pouring to.
//   capacity: The amount of water the bucket we are pouring into can hold.
//   amount: The amount of water we are attempting to pour.

void pour(double &bucket1, double &bucket2, double &capacity, double &amount){
    // There is enough room in bucket 2 for all of the water we are pouring
    if (amount + bucket2 <= capacity) {
        bucket2 += amount;
        bucket1 -= amount;
    }
    // There is not enough room in bucket 2, so we just pour what will fit
    else {
        float poured = capacity - bucket2;  // poured= 3-1
        bucket2 = capacity; //bucket2=3
        bucket1 -= poured;  //bucket1=4-2
    }
}
