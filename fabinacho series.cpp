#include <iostream>
using namespace std;
int main()
{
	int num=10,i,sum=1,num1=0,num2=1;
	for(i=0;i<=num;i++)
	{
		cout<<sum<<", ";
		sum=num1+num2;
		num1=num2;
		num2=sum;
	}
	cout<<"\b\b ";
}