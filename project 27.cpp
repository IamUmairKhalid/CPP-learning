#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	/*char c[81];
	int j=-1;
	cout<<"Enter your name: ";
	do
	{
		j=j+1;
		c[j] = getche();
	}
	while(c[j]!='\r');
	c[j]='\0';
	j=0;
	cout<<"\nYour name is: ";
	do
	{
		cout<<c[j];
		j++;
	}
	while(c[j]!='\0');*/
	
	char c[81];
	int j=-1,space=1;
	cout<<"Enter your name: ";
	do
	{
		j=j+1;
		c[j] = getche();
	}
	while(c[j]!='\r');
	c[j]='\0';
	j=0;
	cout<<"\nYour name is: ";
	do
	{
		cout<<c[j];
		if(c[j]==' ')
		{
			space++;
		}
		j=j+1;
	}
	while(c[j]!='\0');
	cout<<"\nThere are "<<j<<" characters in your name.";
	cout<<"\nThere are "<<space<<" words in your name.";
}
