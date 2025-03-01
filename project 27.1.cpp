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
	int j=-1,vow=0;
	cout<<"Enter your name: ";
	do
	{
		j=j+1;
		c[j] = getche();
	}
	while(c[j]!='\r');
	c[j]='\0';
	j=0;
	cout<<"\n\nYour name is: ";
	do
	{
		cout<<c[j];
		switch(c[j])
		{case 'a':
		 case 'e':
		 case 'i':
		 case 'o':
		 case 'u':
		 case 'A':
		 case 'E':
		 case 'I':
		 case 'O':
		 case 'U':	
			vow=vow+1;
		}
		j=j+1;
	}
	while(c[j]!='\0');
	cout<<"\n\nThere are "<<vow<<" vowel words in your name.";
}
