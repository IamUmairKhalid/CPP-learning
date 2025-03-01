#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int isprime(int n);

main()
{
	float num,p;
	cout<<"Enter the a number: ";
	cin>>num;
	if(isprime(num))
	{
		cout<<endl<<num<<" is a prime number";
	}
	else
	{
		cout<<endl<<num<<" is not a prime number";
	}
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

