#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	char name1[50],name2[50],name3[50];
	int k=-1,j=-1;
	cout<<"enter first name: ";
	cin>>name1;
	cout<<"enter second name: ";
	cin>>name2;
	do
	{
		j++;
		name3[j]=name1[j];
	}
	while(name1[j]!='\0');
	name3[j]=' ';
	do
	{
		k++;
		j++;
		name3[j]=name2[k];
	}
	while(name2[k]!='\0');
	cout<<"\nfull name: "<<name3;
}
