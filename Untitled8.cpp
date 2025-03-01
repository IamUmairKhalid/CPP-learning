#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

/*int isfound(int a[5],int n);
int loca(int a[5], int n);

main()
{
	int a[5], j, num, loc;
	cout<<"Enter any five numbers (each on one line:\n\n";
	for(j=0;j<5;j++)
	{
		cout<<"Num "<<j+1<<" : ";cin>>a[j];
	}
	cout<<"\nEnter a number you want to search: ";cin>>num;
	loc = loca(a,num);
	if(isfound(a,num))
	{
		cout<<"\nNum is found at location "<<loc+1;
	}
	else
	{
		cout<<"\nNum is not found";
	}
}

int isfound(int a[5],int n)
{
	int j,flag=0,loc;
	for(j=0;j<5;j++)
	{
		if(n==a[j])
		{
			flag=1;
			return flag;
		}
	}
	return flag;
}
int loca(int a[5],int n)
{
	int j,loc;
	for(j=0;j<5;j++)
	{
		if(n==a[j])
		{
			loc=j;
		}
	}
	return loc;
}*/

int isfound(int a[5], int n);

main()
{
	int a[5], j, num, loc;
	cout<<"Enter any five numbers (each on one line:\n\n";
	for(j=0;j<5;j++)
	{
		cout<<"Num "<<j+1<<" : ";cin>>a[j];
	}
	cout<<"\nEnter a number you want to search: ";cin>>num;
	loc = isfound(a,num);
	if(loc !=0)
	{
		cout<<endl<<num<<" is found at location "<<loc+1;
	}
	else
	{
		cout<<"\nNum is not found";
	}
}

int isfound(int a[5],int n)
{
	int j;
	for(j=0;j<5;j++)
	{
		if(n==a[j])
		{
			return j;
		}
	}
	return -1;
}

