#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	char a[81],j;
	cout<<"enter any string: ";
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
		
		if(a[j]>='a'&&a[j]<='z')
		{
			a[j]=a[j]-32;
		}
		else if(a[j]>='A'&&a[j]<='Z')
		{
			a[j]=a[j]+32;
		}
		j++;
		
	}
	while(a[j]!='\0');
	cout<<"\n\nyour name is: "<<a;
	
}
