//Full Name: NIMRA SIDDIQUI
//Assignment: Assignment 3 , Problem 2: Zip Code File Search



//This program requests the user's input for the city.
//The city name is then read from the zipcodes.txt file.
// check whether the city name entered by user is found in the file or not
//Verify whether the user-entered city name is present in the file or not.
//The file "zip codes.txt" consists of city name and  their zip code, they are separated by colon(:)


#include <iostream>
#include <fstream>
using namespace std;



//function declaration section
string read(string); //this function (read()) takes string as a parameter and return string


//main function starts from here

int main() {
//this variable contains the user-supplied city name.
    string city;

    //prompt user for the city
    cout <<"What city would you like the zip code for :";
    getline(cin,city); //read the whole line not only till space provided by the user and store in the city

    /*The user-input string will be turned into lowercase using the
    following block of code, which will change all of the letters
    in the string to lowercase. This is done so that searching for
    a city name in the file will be simple regardless of whether the
    user inputs it in upper case, lower case, or a combination of
    both at different times.*/

     for (int i = 0; i < city.length(); i++) //loop runs until i is less than the length of the string. length() function gives the length of the string
     {
        city[i] = tolower(city[i]); //each letter of the string stored in variable city will be converted into uppercase
     }


  //calling of a read function by passing the string entered by the user
    string i= read(city); // variable 'i' will store the string return by the function read()


    if(i=="not found") //if the return of function is  "not found", then it means the city entered by user is not in the file
    {
        cout <<" That city is not in our database:";   //display the message
    }
    else if (i=="error") //if there is error in the opening of the file
    {

        cout <<"Could not open zip code file!";  //display error message for opening the file
    }

//if the above "if statement"  is not true then the zip code will be returned
    else
    {
        cout << "The zip code for "<<" "<<city <<" " <<" is "<< i;  //display zip code
    }
}


//function definition section


string read(string city) //takes city entered by the user as a input
{
    ifstream fin; // Input stream to open file for reading
    string zipcode; //store zipcode
    string c;  // to read the city name from the file
    fin.open("zipcodes.txt");  //open the file

      if(fin.good())  // if the file is good to open.Validate that file actually open for reading
         {

               //this while loop will continue as long as the file is good to open and the file does not reach the end
                while (fin.good() && !fin.eof())
                 {
                   getline(fin, c, ':'); //  get city name (up to  colon :) in each line

                    // This block of code will convert the city name read from the file  into the lower case
                    //it is done so that even if user gives input in upper case lower case or mix of both, the city named will be retrieved from the file
                    //as long as the user gives correct spelling of the city
                    for (int i = 0; i < c.length(); i++)
                    {
                         c[i] = tolower(c[i]);
                    }

                     if(city==c) //if city name entered by the user is same as the city found in the file
                   {
                     getline(fin, zipcode); // read the part of the line after colon : , that is zip code
                     return zipcode; //return the corresponding zipcode
                   }

                   //if city is not found in the file in each iteration
                     else
                  {
                    // pointer will shift to the other part of the line
                    getline(fin, zipcode);   // read the part of the line after colon : , that is zip code
                  }

                }

             // if the city entered by the user is not found in the file, then it return "not found" string
              return "not found";
         }

        //if there is error in opening the file, return "error" string
         else
        {

          return "error";
        }


}

