#include <iostream>
#include <iostream>
using namespace std;
main()
{
	int j,k,l;
	j=1;
	do
	{
		l=k+1;
		k=2;
		do
		{
			cout<<"* ";
			k=k+1;
		}
		while(k<=l);
		j=j+1;
		cout<<"\n";
	}
	while(j<=4);
}
