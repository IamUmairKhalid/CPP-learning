#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int isprime(int n);

main()
{
	int j;
	for(j=1;j<=100;j++)
	{
		if(isprime(j))
		{
			cout<<j<<", ";
		}
	}
	cout<<"\b\b" ;
}

int isprime(int n)
{
	int j;
	for(j=2;j<=n/2;j++)
	{
		if(n%j==0)
		{
			return 0;
		}
	}
	return 1;
}

