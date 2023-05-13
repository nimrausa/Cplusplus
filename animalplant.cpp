#include <iostream>
using namespace std;
int main()
{
char answer;
cout << "It is on animal (a) or plant (p) :";
cin >> answer;
if (answer=='a'){
        cout << "Enter animal branch" << endl;
    cout << "It is on land (l) or water(w) :";
    cin >> answer;
    if(answer=='l'){
        cout<< "it is dog" << endl;
              }
 else{
        cout<< "it is fish" << endl;
  }
}
else{
     cout << "Enter plant branch" << endl;
        cout << "It is on short(s) or tall(t) :";
    cin >> answer;
if(answer=='s'){
        cout<< "it is flower" << endl;
              }
 else{
        cout<< "it is tree" << endl;
  }

}
}
