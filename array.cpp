#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
int n=5;

int arr[n];

srand(time(NULL));

for(int i=0;i<n;i++)
{
 arr[i]=(rand() % 10 < 4);

}

for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
cout<<endl;

return 0;
}
