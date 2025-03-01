#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int length( char name[10]);
main()
{
	char name[10];
	cout<<"Enter your name: ";
	cin.get(name,10);
	cout<<"\nLength of your name is "<<length(name);
}

int length(char name[10])
{
	int j;
	j=0;
	while(j<10)
	{
		if(name[j]=='\0')
		{
			break;
			
		}
		j++;
	}
	return j;
}
