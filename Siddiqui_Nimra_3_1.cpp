//Full Name: NIMRA SIDDIQUI
//Assignment: Assignment 3 , Problem 1: Bond, James Bond




#include <iostream>
#include <string>

using namespace std;

//main program starts from here

int main()
{
    string name;      //to store name entered by user
    string first_name; //to store first name
    string middle_name;  //to store middle name
    string last_name;    //to store last name
    int size;      //stores the size of the string or name provided by the user
    int select1;      // first space index will come
    int select2;      // for getting the index of the space after first name
    int select3;     // for getting the index of the space after middle name
    int select4;   // gives the index of the space after the last name if user enter first, middle and last name


   //prompt user for the name
    cout <<"Enter your name :" <<endl;

    //read the name even after the space
    getline(cin,name); //read the name entered by the user and stores string in the variable named  "name"


     size=name.size(); //to find the length of the string or name provided by the user

     select1=name.find(' ',0); //finds the first occurence of space

//Before inputting the name, if the user enters any spaces, the while loop will execute and remove the spaces.
//as long as there are spaces before the name or in the first index, the loop will continue.
    while(select1==0) // to check the whitespaces infront of the name enetered by user
    {
        name=name.erase(select1,select1+1); //erase the spaces before the name
        select1=name.find(' ',0);  //stores first occurence of the space after erase of the space before name
    }

   //If the user simply enters their first name, the spaces after it will be trimmed. Whenever a space
   //is entered in the last index of the first name, the loop continues to execute.
   while(name.at((name.size())-1)==' ') //checking if there is spaces after the first name
   {
       name=name.erase(name.size()-1,1); //erase the space of the last index each time the loop runs
       select1=name.find(' ',0); //returns -1 if there is no any spaces after first name
   }




    //if there is only the first name or  there is no space after the first name then it will return -1
    if(select1==-1)
    {
        first_name=name; //store the name in the variable named "first_name"

        //display the output
       cout <<first_name <<"," <<" "<<"just" <<" " <<first_name;

    }



    //if there is not only first name , that is there is middle name and last name  or only last name

    else
    {
        //if user enters first name and last name (no middle name)


        first_name=name.substr(0,select1); //characters before the  first space will be stored in the variable named "first_name"


        select2=name.find(' ',select1+1); //to find the second occurence of the space


     //this loop will continue as long as there is more than one spaces after first name
     //if select2 is equal to (select1+1), that is , if occurence of second space is right after the occurence of first one
     //means if there are more than one spaces in a row
        while(select2==(select1+1)) // to check the whitespaces after first name
       {
        name=name.erase(select1+1,1); //each time  the loop runs, one space will be erased
        select2=name.find(' ',select1+1); //find the occurence of the space
       }


       //if there is no spaces after the second name, or no more spaces in the name after first space,then it will return -1
        if(select2==-1)
        {
            //substr will break the string the from the (select+1)th select to the last index
            string last_name=name.substr(select1+1,size-(select1+1));
            cout <<last_name <<" ," <<first_name <<" " <<last_name; //display the output

        }


        //in the case of  three names provided the user ( first name, middle name and last name)
        //the following block will run
        else
        {
          //susbtr function will break down the string provided by the user  from (select1+1)th index upto  (select2-select1) number from that index
             middle_name=name.substr(select1+1,select2-select1); //store middle name



             select3=name.find(' ',select2+1); //find index of the space after the second name
            // or find the first occurence of space after  (index2+1)th index

             //loop continues as long as there is more than one spaces after  middle name
             while(select3==(select2+1)) // to check the whitespaces infront of the last name enetered by user
            {
              name=name.erase(select2+1,1); //this will erase the space each time the loop runs
              select3=name.find(' ',select2+1); //to find the index of a space from (index2+1)th index
             }

            string last_name=name.substr(select2+1,size-(select2+1)); //store last name to the variable named "last_name"

             select3=last_name.find(' ',0); //it will search the last name occurance

     // if there is space after the last name , then it will not return -1
            if(select3!=-1)
            {
                last_name.erase(select3,(last_name.size()-1)); //trim one space after last name in each loop iteration if there is any space after last name
            }

            //display the output as below if user enter first name, middle name and last name
            cout <<last_name <<" ," <<first_name <<" " <<middle_name << " " <<last_name;
        }

    }


}
