#include <iostream>
using namespace std;

int main()
{
    char response;

    cout << "Do you want to see the greetings? (y or n)?: ";
        cin >> response;



    // Loop as long as keep_going is 'y'
    while(response=='y') {
            cout<<"welcome to CSIS 6901 " << endl;
        // Prompt for whether to stay in loop
        cout << "Do you want to see the greetings again? (y or n)?: ";
        cin >> response;

    }
    return 0;
}

    // Executed after loop exitvv

