#include <iostream>
#include <iomanip>
using namespace std;
main()
{
	int j,k,l;
	l=1;
	for(j=1;j<=4;j++)
	{
		
		for(k=7;k>=l;k--)
		{
			
			cout<<"*";
			
		}
		l=l+2;
		cout<<endl;
	}
}
