#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int isvalid(float n);

main()
{
	float num;
	cout<<"Enter a number : ";
	cin>>num;
	if(isvalid(num))
	{
		cout<<"\nThe squre root of number is: "<<sqrt(num);
		cout<<"\nThe inverse of number is: "<<1/num;
	}
	else
	{
		cout<<"\nThe number is invalid";
	}
}

int isvalid(float n)
{
	int a=1;
	if(n<0 || n==0)
	{
		a=0;
	}
	return a;
}
