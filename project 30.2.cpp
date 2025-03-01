#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
main()
{
	char a[5],j,num,flag=0,loc=-1;
	for(j=0;j<5;j++)
	{
		cout<<"\nEnter the element "<<j+1<<" : ";
		cin>>a[j];
	}
	cout<<"\nEnter the name you want to search: ";
	cin>>num;
	for(j=0;j<5;j++)
	{
		if(a[j]==num)
		{
			flag =1;
			loc=j;
			break;
		}
	}
	if(flag==1)
	{
		cout<<"num is present in the list at "<<loc+1;
	}
	else
	{
		cout<<num<<" not found in the list";
	}
}
