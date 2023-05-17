//Nimra Idris Siddiqui
// Assignment 2 , Problem 6: Another Pokémon Game in 2D

#include <iostream>
#include<string>
using namespace std;
const int row=5; //total number of row in two dimensional array
const int column=5; //total number of columns in two dimensional array
//function declaration section
int Pokemon_creation(int); //By taking creation as an argument. The function will initialize Pokemon depend upon the random number generated and creation
int findin_room(int[][column],int &); //Two find a Pokemon in 2 dimensional array the row and column is specify and other is the address of variable)



int main()
{
    string pokemon="Charmander"; //my last digit of YSU ID is 6
    const int creation=3; //total number of creation for Charmander is 3
    int count=0; //initializing count 0 since no Pokemon is found initially the number will increase with each new Pokemon found
    const int turn=10; //total number of turn the user want to play the game
   //
// srand(time(0)); //create seed for the random number
    int room[row][column]; //declaring two dimensional array
    int rand_num= rand()%25 +0;  //the size of array is 5*5 so there will be total number of 25 rooms(from 0th to 24th)
   // thus the random number varies  from 0 to 24



    for(int i=0; i<row; i++) //outer loop runs to and get increase each time when the column reach from 0 to 4
    {
        for(int j=0; j<column; j++) //inner loop will initialize the column and will run 0 to 4 each time
          {

      //25 rooms in 5*5 array  from (0th to 24th location), 1 will be set to any one random room which depends on the random number generated
         int poke=i*column+j; // the value of poke varies from 0 to 24 and random number is all generated in the same range
            if(poke==rand_num) // if random number generated is equal to poke,
            {
            room[i][j]=1; //if the above condition is true than setting 1 to the  some random room
            }

             else        //the selected room=1 and all location besides the random number will be initialize to 0
            {
             room[i][j]=0; //setting 0 to all the rooms expect the room number equivalent to the given random number
            }
          }
    }

    //starting of the game and user get 10 turns in total
    for(int i=0; i<turn; i++)
    {
        //The random number is generated for each turn and if new pokemon arrives by the random number generator
        //than the Pokemin is stored in any random block of 2-D array
         rand_num= rand()%25 +0; // the pokemon will stored in that room which is equals to rand_num


       findin_room(room,count); //calling finding function that will search pokemon in the room inputed by user


   //if pokemon is created, then created pokemon will be stored in random room

        if( Pokemon_creation(creation)==1)
          {

//if the pokemon is found in that particular room than pokemon should increase by 1
            for(int i=0; i<row; i++) //outer loop runs from 0 to 5 for row
    {
        for(int j=0; j<column; j++) //inner loop run for column
          {
             int charmender=i*column+j; //find out the location of 5*5 array(from 0 to 24)
            if(charmender==rand_num) // if random number generated is equal to poke then, increment that array location by 1
            {
            room[i][j]++; //total Pokemon in this room will be increased by 1
            }

          }
    }

          }



    }

    cout<<"You found "<<count << " " <<"Charmander";// shows total number of Pokemon found in the end game
}







//defining of the above function

int findin_room(int room[row][column],int &count)
{

    int room_row; // for the array's row
    int room_column; //for array's column
    //prompt user for a room number
    cout<< " What room do you want to search :" <<endl;
    cout <<" Enter room in row :?" ; //prompt user for row
    cin>> room_row;
     cout <<" Enter room in column :?" ; //prompt user for column
    cin>> room_column;
    while(room_row<0 || room_row>=5 || room_column<0 || room_column>=5) //the value of row and column is set in particular range if th user don't enter the given range than error message get display
    {
        cout<<" This is not a legal room.Please Try again :" <<endl; //if the user enter the room which excludes the range than this message will shows
        cout<< " What room do you want to search :"<<endl;
        cout <<" Enter room in row :?";
        cin>> room_row;
        cout <<"Enter room in column :?" ;
        cin>> room_column;

    }


     //if the inputed room number has no pokemon
            if(room[room_row][room_column]==0)
            {
                cout<< "There is no Charmander in that room"  <<endl; //display message for no pokemon


            }
            //if player inputs room number where there are one or more pokemon
            else
            {

                cout <<" You found " <<" " << room[room_row][room_column] << " "<<" Charmander in that room"  <<endl; //display total Charmander in that room
                count=count+room[room_row][room_column]; //add pokemon found in that room to the total pokemon found so far
                room[room_row][room_column]=0; //set that room to 0 pokemon

            }

        //  for sensing the pokemon in the adjacent room

  //if player wants to search for 1st location (0th row and 0th column )and there is one or more Pokemon in the adjacent room
    //adjacent room will be room number 1 and 5
    if((room_row==0 && room_column==0) && (room[ room_row][room_column+1]>=1 || room[room_row+1][room_column]>=1))
            {
                cout<< " You sense a Charmander in an adjacent room"<<endl; //display sensing message
            }

 //if player inputs row as 4 and column as 4 and there is one or more pokemon in adjacent room
 //adjacent room will be 19 and 23
            else if((room_row==4 && room_column==4) && ( room[room_row][room_column-1]>=1 || room[room_row-1][room_column]>=1))
            {
                cout<<" You sense a Charmander in an adjacent room"  <<endl;
            }
            //if user search for (4th row and 0th column)
           //adjacent room will be 15 and 21
            else if( (room_row==4 && room_column==0) &&  (room[ room_row-1][room_column]>=1 || room[ room_row][room_column+1]>=1) )
             {
                cout<< "You sense a Charmander in adjacent room"<<endl <<endl;
             }

 //if user search for (0th row and 4th column) and there is one or more Pokemon in the respecive adjacent room
 //adjacent room will be 3 and 9
            else if ( (room_row==0 && room_column==4) &&  (room[room_row+1][room_column]>=1 || room[ room_row][room_column-1]>=1) )
            {
                cout<< " You sense a Charmander in adjacent room" <<endl;
            }

            //if user search from ((1st row to 3rd row)and 4th column)
             else if ((room_row>=1 && room_row<4 && room_column==4) && (room[room_row-1][room_column]>=1 || room[room_row+1][room_column]>=1 || room[room_row][room_column-1]>=1))
             {
                 cout<< "You sense a Charmander in adjacent room" <<endl;
             }

            //if user search for (0th row and 4th column)
          else if( (room_row>=1 && room_column==0) &&  (room[ room_row+1][room_column]>=1 || room[ room_row][room_column-1]>=1) )
             {
                cout<< "You sense a Charmander in adjacent room" <<endl;
             }

              //if user search from ((1st row to 3rd row)and 0th column)
              else if ((room_row>=1 && room_row<=3 && room_column==0) && (room[room_row-1][room_column]>=1 || room[room_row+1][room_column]>=1 || room[room_row][room_column+1]>=1))
             {
                 cout<< "You sense a Charmander in adjacent room"<<endl <<endl;
             }
              //if user search from ((4th row) and (1st to 3rd column)
              else if ((room_row==4 && room_column>=1 && room_column<=3 ) && (room[room_row-1][room_column]>=1 || room[room_row][room_column+1]>=1 || room[room_row][room_column-1]>=1))
             {
                 cout<< "You sense a Charmander in adjacent room"<<endl <<endl;
             }

              //if user search from (1st row to 3rd row) and (1st column to 3rd column))
         else if((room_row>=1 && room_row<=3 && room_column>=1 && room_column<=3) &&
         (room[room_row][room_column+1]>=1 || room[room_row][room_column-1]>=1
                 || room[room_row+1][room_column]>=1  || room[room_row-1][room_column]>=1))
            {
                cout<< "You sense a Charmander in adjacent room"<<endl <<endl;

            }

        return 0;
        }





    int Pokemon_creation(int creation)
{
    //since creation=3
    //The odds are 3 out of 10 that a Pokemon will be generated in each turn
    //if random number generated is less than creation then arrival of Charmander will take place
    if (rand() % 10 < creation)
    {
        cout<<"Another Charmander has arrived"  <<endl ; //display the arrival of the pokemon( Charmander)
        return 1; //return 1 to denote the arrival of the Charmander
    }
    else
    {
        return 0; //return 0 if pokemon is not created
    }
}












