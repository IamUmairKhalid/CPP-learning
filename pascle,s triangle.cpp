#include <iostream>
using namespace std;
int main()
{
	int i, j, k;
	int value, rows=6;
	for(i=0;i<rows;i++)
	{
		value=1;
		for(j=0;j<rows-1-i;j++)
		{
			cout<<" ";
		}
		for(k=0;k<=i;k++)
		{
			cout<<" "<<value;
			value=value*(i-k)/(k+1);
		}
		cout<<"\n\n";
	}
	return 0;
}