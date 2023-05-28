//Full Name: Nimra Siddiqui
//Assignment: Assignment 3 , Problem 4: Yet Another Pokemon



#include <iostream>
#include <string>
using namespace std;

//defining class Pokemon
class Pokemon
{
    private:
    string name; //storing name of the Pokemon provided by the user
    int hunger; //to store hunger level of the Pokemon
    int boredom; // to store boredom level of the pokemon

    public:
    Pokemon(string); //constructor that takes string as an argument
    string getName(); //to return the name of the pokemon provided by the user. Return string and does not have any arguments
    int getHunger(); // return hunger level (integer) of the pokemon and does not take any arguments
    int getBoredom();// return boredom level (integer) of the pokemon and does not take any arguments
    void setHunger(int);// this method does not return anything and takes integer as an input. It is used to set hunger level following increase
    void setBoredom(int);// this method does not return anything and takes integer as an argument. It is used to set boredom level after increment
    void feeding(); //this method takes no argument and return void. This method updates the hunger level
    void playing(); //this method takes no argument and return void. This method updates the boredom level
    string State(); //this method returns currentstate (happy,bore, very happy,very bore) of the pokemon and takes no argument

};


 Pokemon:: Pokemon(string n)
    {

        name=n;  //setting the name of the pokemon provided by the player to the variable name
        hunger=0; //initial hunger level set as 0
        boredom=0; //initial boredom level set as 0
    }

    string Pokemon:: getName()
    {
        return name; //returns the name of the Pokemon
    }

    void Pokemon:: feeding()
    {
        hunger=hunger-18; // hunger level is reduced by 18 each time when this method is called
        if(hunger<0) //if hunger level goes below 0
        {
            hunger=0; //hunger level should start from 0
        }
    }

    void Pokemon:: playing()
    {
        boredom=boredom-18; // boredom level is reduced by 18, each time this method is called
        if(boredom<0)   //if boredom level goes below 0
        {
            boredom=0;  //setting up boredom level to 0 as boredom level cannot be below 0
        }

    }

     int  Pokemon:: getHunger()
     {
         return hunger;  //returns the hunger level of the pokemon
     }

     int Pokemon:: getBoredom()
     {
         return boredom; //returns the boredom level of the pokemon
     }
    void  Pokemon:: setHunger(int hun)
     {
         hunger=hun; //updating the hunger level after feeding or playing
     }

     void Pokemon:: setBoredom(int bore)
     {
         boredom=bore; //updating the boredom level after feeding or playing
     }

     string Pokemon:: State()
    {
     if( (hunger+boredom) <15) //if addition of hunger level and boredom level is less than 15
       {
           return "happy"; //return the state "happy"
       }

     else if(hunger>boredom  && hunger>20) //if hunger level is greater than boredom and hunger level is greater than 20
       {
           return "very hungry"; //return the state " very hungry"
       }


     else if( hunger<boredom  && boredom>20)  //if boredom level is greater than hungry level and boredom level is greater than 20
       {
           return "very bore"; //return the state " very bore"
       }

       else if(hunger>boredom ) //if hunger level is greater than boredom level
       {
           return " hungry"; //return the state " hungry"
       }

     else
     {
         return "bore";
     }

   }









int main() {
    string name;
    char choice;
    string pokemon="Charmander"; //character set based on my last digit of YSU ID (Y00848856)
    int hunger_rate=5; //hunger rate of the pokemon
    int boredom_rate=5; //boredom rate of the pokemon


    // Prompt the player for the name of their character.
    cout << "You have a "<<pokemon << endl;
    cout << "What do you want to name it? ";
    cin >> name;

    // Construct an object for that character
    Pokemon p(name);

    while (true) {

        // Print how their character is feeling (happy, hungry, bored, etc.)
       cout << name <<" is  " <<p.State() <<endl;  //calling of currentState() method to determine the current state of the pokemon



        // Prompt the player for whether they want to feed or play with their character
        // (looping until they give a legal answer)
        cout << "Do you want to feed (f) or play with (p) " << p.getName() << "? " <<endl;
        cin >> choice;
        while (choice != 'f' && choice != 'p') {
            cout << "Please enter f or p: ";
            cin >> choice;
        }
        switch (choice) {
            case 'f':
                // Feed the character
                p.feeding();  //calling of the feed() function



                break;
            case 'p':
                // Play with the character
                p.playing();  //calling of the play() function


                break;
        }
        // Increase the hunger and boredom levels by the rates for your
        // specific type of Pokemon.
       int a=p.getHunger()+hunger_rate; //the variable a stores the addition of current hunger level and hunger rate
        p.setHunger(a); //calling setHunger(a) function to update the hunger level after addition with the hunger rate
        int b=p.getBoredom()+boredom_rate; //the variable b stores the addition of current boredom level and boredom rate
        p.setBoredom(b);//calling setBoredom(b) function to update the boredom level after addition with the boredom rate


    }
}

