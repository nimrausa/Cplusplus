//NIMRA SIDDIQUI
//ASSIGNMENT:01 PROBLEM:06

#include <iostream> //Standard Input-Output Streams Library
#include <cmath>  //to compute common mathematical operations
#include<random>
#include <time.h>  //the time.h library based on current time so different each run
#include<string.h> //the string header file and manipulation functions

using namespace std;
int chooseRandom(int maxVal) {
    return rand() % maxVal; //to generate random numbers

}
int main() {
// Set random seed based on time
// My Y ID last two digit is 5 and 6 so I choose Nidoran(0) and Nidoran(1)
    int Nidoran_0[2]={3,6};
    int Nidoran_1[2]={6,2};
    int numberoftutns=(Nidoran_0[0]+Nidoran_0[1]+Nidoran_1[0]+Nidoran_1[1])/2;//the sum of the speed and strength
    //for each of the creatures, divided by 2. (3 + 6 +6 + 2)/2 = 8.5 == 8 turns.

    int ans=0;
    for(int i=1; i<=numberoftutns; i++){ //for loop will run up to 8 time that is equal to  8 turns
    srand(time(0)); // to set an initial random seed


    // Generate random number between 1 and 10
    int pokemon_choosen;
    pokemon_choosen = chooseRandom(2);
    // Here is a random pokemon choose between Nidoran(0) and Nidoran(1)
    cout << "You see a Nidoran(" << pokemon_choosen << ")!" << endl;

   // char Capturing_Pokemon();
    char select;
            cout << "Use a net(n) or a freeze ray(f): " ;
            cin>>select;

            while(select!= 'n' && select != 'f'){
            //If the player enters neither n nor f, it will keep prompting until the user enter correct character.
            cout << "Enter n or a f: " ;
            cin>>select;
                }
            //Main gameplay

            int count=0;//to track number of Pokemon caught

           int number = rand() % 100 + 1;  //Generate random number 1 to 100
            int catching = rand() % 10 +1; //Generate random number 1 to 10
            //Capturing Pokemon
            if(select=='n'){ //if the user enter the "n"
                if(pokemon_choosen==0){//If the the random number choose the first Pokemon than this loop will run


                    int probability_of_catching_Nidoran_0=(10-Nidoran_0[1])*10;
                    //According to word documenT
                    //If they choose a net than capturing the creature is based on 10 minus its speed that is percentage of capturing the Pokemon
                    //with net is 40%

                        if(catching >=6 || number<=40  ){
                                //According to anouncement
                            //Since the Speed is 6. The random number would need to be at least 6 to capture it with a net.
                             //According to word document
                             //the probability of catching a Nidoran_0 with a net is 40%.
                            cout << "The Pokemon caught in the net!" << endl;
                            count++; //increase by one each time if this condition is true
                        }
                        else {
                            cout << "The Pokemon dodged the net!"   << endl;

                            }
                    }
                else{

                    int  probability_of_catching_Nidoran_1=(10-Nidoran_1[1])*10; //If the the random number choose the second Pokemon
                    //than percentage of capturing the creature is 80%

                        if(catching >=2 || number<=80 ){
                                 //According to announcement
                            //Since the Speed is 2. The random number would need to be at least 2 to capture it with a net.
                              //According to word document
                             //the probability of catching a Nidoran_1 with a net is 80%


                            cout << "The Pokemon caught in the net!" << endl; //the probability of catching a Nidoran(1) with a net is 80%.
                            count++; //increase by one each time if this condition is true
                    }
                        else {
                            cout << "The Pokemon dodged the net!"   << endl;

                        }
                    }


                }


            if(select=='f'){ //if the user enter the "f"
                     if(pokemon_choosen==0){//If the the random number choose the first Pokemon than this loop will run

                    int probability_of_freezing_Nidoran_0=(10-Nidoran_0[0])*10;
                    //According to word document
                    //If they choose a freeze ray than capturing the creature is based on 10 minus its speed the probability of catching a
                    //Nidoran_0 with a freeze ray is 70%


                        if(catching >=3 || number<=70 ){
                                //According to announcement
                            //Since the Strength is 3. The random number would need to be at least 3 to capture it with a freeze ray.
                            //According to word document
                            //the probability of catching a Nidoran_0 with a freezing ray is 70%.
                           cout << "The Pokemon frozen in place!" << endl;
                            count++; //increase by one each time if this condition is true
                        }
                        else {
                            cout << "The Pokemon broke free from the ice!"  << endl;

                            }
                    }
                    else{

                     int probability_of_freezing_Nidoran_1=(10-Nidoran_1[0])*10;  //40%

                        if(catching >=6 || number<=40 ){
                                //According to announcement
                            //Since the Speed is 6. The random number would need to be at least 6 to capture it with a freeze ray.
                               //According to word document
                             //the probability of catching a Nidoran_1 with a freeze ray is 80%



                            cout << "The Pokemon frozen in place!" << endl;  //the probability of catching a Nidoran(1) with a freeze ray is 40%
                            count++; //increase by one each time if this condition is true
                }


                        else {
                            cout << "The Pokemon broke free from the ice!" << endl;

                        }
                    }

    }
          ans =ans+count; //with each iteration count value may increase or remain same depend on the above condition if it is true or not
            //the ans value get updated when count value increases.
    }
            cout << "You Captured " << ans << " Pokemon!" << endl;
    }







