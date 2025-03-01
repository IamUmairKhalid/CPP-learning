#include <iostream>
using namespace std; 
main()
{
	float num1,num2;
	char func;
	cout<<"***Calculator***\n";
	cin>>num1>>func>>num2;
	if(func == '+')
	{
		cout<<num1+num2;
	}
	else if(func == '-')
	{
		cout<<num1-num2;
	}
	else if(func == '*')
	{
		cout<<num1*num2;
	}
	else if(func == '/')
	{
		cout<<num1/num2;
	}
	else if(num2==0)
	{
		cout<<"inf";
	}
	else
	{
		cout<<"Math erorr";
	}

}

