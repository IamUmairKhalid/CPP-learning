#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	char a[81],rev,j;
	cout<<"Enter any string: ";
	j=-1;
	do
	{
		j++;
		a[j]=getche();
	}
	while(a[j]!='\r');
	a[j]='\0';
	j=0;
	do
	{
		j++;
		
	}
	while(a[j]!='\0');
	cout<<"\n\n"<<a;
}
