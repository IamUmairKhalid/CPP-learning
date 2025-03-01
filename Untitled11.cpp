#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

main()
{
	int j,k;
	for(j=1;j<=7;j++)
	{
		for(k=1;k<=j;k++)
		{
			if(j%2==0)
			{
				j=j+1;
			}
			cout<<"*";
		}
		cout<<"\n";
	}
}
