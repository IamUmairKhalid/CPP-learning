#include <iostream>
using namespace std;
main()
{
	int num1,num2,j,bigger,gcd;
	cout<<"Enter two number : ";
	cin>>num1>>num2;
	if(num1>num2)
	{
		bigger=num1;
	}
	else
	{
		bigger = num2;
	}
	for(j=1;j<=bigger/2;j++)
	{
		if(num1%j==0&&num2%j==0)
		{
			gcd=j;
		}
	}

	cout<<"\nThe GCD is "<<gcd;
}

