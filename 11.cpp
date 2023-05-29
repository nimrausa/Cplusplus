#include <iostream>


using namespace std;

int main()


{
int songs;
	cout << "How many songs on the CD :";
	cin >> songs;
	int cdLength = 0;
	int songLength;
	for(int i = 0; i < songs; i++){

		cout << "Enter length (in seconds) of song "  << ": ";
		cin >> songLength;
		cdLength =  cdLength + songLength;
	}
	cout <<  "The CD is " << cdLength << " seconds long." << endl;
}
