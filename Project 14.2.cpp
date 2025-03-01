
#include <iostream>
using namespace std;
main()
{
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	if(n>0)
	{
		cout<<n<<" is positive number";
	}
	else if(n<0)
	{
		cout<<n<<" is negative number";
	}
	else
	{
		cout<<n<<" Is equal to zero";
	}
}
