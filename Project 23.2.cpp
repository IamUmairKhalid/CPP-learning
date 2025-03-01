#include <iostream>
using namespace std;
main()
{
	int j,num,flag=1;
	cout<<"Enter any Number: ";
	cin>>num;
	for(j=2;j<=num/2;j++)
	{
		if (num%j==0)
		{
			cout<<endl<<num<<" is completely divided by "<<j;
			
			break;
			flag = 0;
		}
		if(flag==1)
		{
			cout<<"\nPrime number ";
		}
		else
		{
			cout<<"\n This is not a prime number ";
		}
	}
}

