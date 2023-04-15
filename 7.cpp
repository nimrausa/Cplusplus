#include <iostream>


using namespace std;

int main()
{
    double weight;

    char special;
    cout << "What is your package weight in pounds : ";
    cin >> weight;

    if (weight < 10){
        int cost = 20;
        cout << "Do you want a special delivery ? (y or n):";
        cin >> special;


        if (special == 'y'){
                cost=cost+5;

          cout << "Your cost is $ "<< cost  << endl;
        }
        else{
        cout << "Your cost is $20"  << endl;

        }
    }
    else
    {
    cout << "Your cost is $30" << endl;
    }
    return 0;
}
