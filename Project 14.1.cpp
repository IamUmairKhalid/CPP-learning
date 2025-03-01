
#include <iostream>
using namespace std;
main()
{
	int num1,num2;
	cout<<"Enter the number:";
	cin>>num1;
	cout<<"Enter the divisor:";
	cin>>num2;
	if(num1%num2 == 0)
	{
		cout<<"This number is divisible by the divisor.";
	}
	else
	{
		cout<<"This number is not divisible by the divisor.";
	}
}
