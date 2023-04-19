//NIMRA SIDDIQUI
//ASSIGNMENT:01 PROBLEM:03

//Input : Enter the temperature in Fahrenheit: 40
//Output : That is a cold temperature.

//Input : Enter the temperature in Fahrenheit: 50
//Output : That is a comfortable temperature.

//Input : Enter the temperature in Fahrenheit: 90
//Output : That is a hot temperature.
           //Input : What is the dewpoint: 65
          //Output : It is uncomfortable today.

#include <iostream>
using namespace std;

// This program inputs a temperature and outputs how that temperature feels.
int main()
{
    float temperature; // Current temperature in Fahrenheit
    float dewpoint;
    // Prompt for the temperature
    cout << "Enter the temperature in Fahrenheit: ";
    cin >> temperature;

    // Temperatures below 50 are cold, comfortable otherwise
    if (temperature < 50) { // if the temperature is less than or equal to 50 than this condition will be true
        cout << "That is a cold temperature." << endl;
    }
    else if( 50<=temperature && temperature < 80 )  {  //if the temperature is equal to or larger than 50 and less than 80 than this condition
            //will become true
        cout << "That is a comfortable temperature." << endl;
    }
    else{
        cout << "That is a hot temperature." << endl;  // if both condition become false than this condition will run
        //To prompt the user for the dewpoint:
        cout << "What is the dewpoint: ";  //According to question if the "Temperature is hot" than the dewpoint is further asked.
        cin >> dewpoint;
            if(dewpoint > 60){ //if the dewpoint is larger or equal to 60 than this condition will become true.
         cout << "It is uncomfortable today." << endl;
        }
            else{ //if the initial condition become false than this condition will run
                cout << "It is dry and comfortable today." << endl;
            }

    }
}
