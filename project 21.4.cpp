#include <iostream>
#include <iomanip>
using namespace std;
main()
{
	int j,k,l;
	l=1;
	j=1;
	while(j<=4)
	{
		k=7;
		while(k>=l)
		{
			
			cout<<"*";
			k--;
		}
		l=l+2;
		cout<<endl;
	j++;
	}
}
