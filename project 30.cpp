#include <iostream>
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
	cout<<"\nThe name you entered are :\n";
	for(j=0;j<3;j++)
	{
		cout<<name[j]<<"\n";
	}
}
