#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
	int n, i, isprime=0;
	
	cout<<"Enter a number : ";
	cin>>n;
	
	for(i=2;i<=(n/2);i++)
	{
		if(n%i==0)
		{
			isprime=1;
			
		}
		break;	
	}
	if(isprime==0)
		{
			cout<<"This is a prime number";
		}
		else
		{
			cout<<"This is not a prime number";
			
		}
	getch();
	return 0;
}
	