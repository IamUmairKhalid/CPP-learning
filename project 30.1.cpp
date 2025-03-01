#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
main()
{
	char name[3][10];
	int j;
	for(j=0;j<3;j++)
	{
		cout<<"Enter name of students no "<<j+1<<" : ";
		cin>>name[j]; 
	}
	for(j=0;j<3;j++)
	{
		cout<<"\nThe length of "<<name[j]<<" is : "<<strlen(name[j]);
	}
}
