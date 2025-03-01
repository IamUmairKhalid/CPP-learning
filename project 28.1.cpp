#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	/*char a[81],j;
	cout<<"Enter your password: ";
	j=-1;
	do
	{
		j++;
		a[j]=getch();
		cout<<"*";
	}
	while(a[j]!='\r');
	cout<<"\b ";
	a[j]='\0';
	cout<<"\n\nyour password is: "<<a;*/

	char a[81],sple=0;
	int j,onedi=0,upca=0,loca=0,mile=0;
	cout<<"Enter your password: ";
	j=-1;
	do
	{
		j++;
		a[j]=getche();
		//cout<<"*";
	}
	while(a[j]!='\r');
	cout<<"\b ";
	a[j]='\0';
	//cout<<"\n\nyour password is: "<<a;
	j=0;
	do
	{
		if(a[j]>='a'&&a[j]<='z')
		{
			loca++;
		}
		else if(a[j]>='A'&&a[j]<='Z')
		{
			upca++;
		}
		//else if(a[j]>=8&&a[j]<=81)
		//{
		//	mile++;
		//}
		else if(a[j]>=0||a[j]<=9)
		{
			 onedi=onedi+1;
		}
		else if(a[j]=='#'&&a[j]=='@'&&a[j]=='$')
		{
			sple++;
		}
		
		j++;
	}
	while(a[j]!='\0');
	cout<<endl<<a;
		if(mile==0)
		{
			cout<<"\nminimumlength";
		}
		if(onedi==0)
		{
			cout<<"\nonedigit";
		}
		if(loca==0)
		{
			cout<<"\nlowercase";
		}
		if(upca==0)
		{
			 cout<<"\nupercase";
		}
		if(sple==0)
		{
			cout<<"\nspecialdigit";
		}
	}
