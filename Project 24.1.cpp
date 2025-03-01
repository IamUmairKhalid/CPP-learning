#include <iostream>
using namespace std;
main()
{
	/*int j,k;
	for(j=1;j<=5;j++)
	{
		for(k=1;k<=j;k++)
		{
			cout<<j<<"\t";
		}
		cout<<"\n";
	}*/
	
	int j,k;
	for(j=1;j<=5;j++)
	{
		for(k=6-j;k>=1;k--)
		{
			cout<<j<<"\t";
		}
		cout<<"\n";
	}
}

