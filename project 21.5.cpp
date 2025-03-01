#include <iostream>
#include <iomanip>
using namespace std;
main()
{
	int j,k,l;
	l=1;
	j=1;
	do
	{
		k=7;
		do
		{
			cout<<"*";
			k--;
		}
		while(k>=l);
		l=l+2;
		j++;
		cout<<endl;
	}
	while(j<=4);
}
