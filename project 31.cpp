#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
main()
{
	char name[5][10],search[10];
	int j,k,flag=0,loc=-1;
	for(j=0;j<5;j++)
	{
		cout<<"\nEnter the element "<<j+1<<" : ";
		cin>>name[j];
	}
	cout<<"\nEnter the name you want to search: ";
	cin>>search;
	for(j=0;j<5;j++)
	{	
		if(name[j][k]==search[k])
			{
				//cout<<endl<<search<<"found at"<<j+1;
				flag =1;
				loc=j;
			}
}
	if(flag==1)
	{
		cout<<search<<" is present in the list at "<<loc+1;
	}
	else
	{
		cout<<search<<" not found in the list";
	}
}
