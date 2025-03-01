#include <iostream>
#include <math.h>
using namespace std;
main()
{
	int a,b,c,disc;
	cout<<"Enter value of a,b,c: ";
	cin>>a>>b>>c;
	disc = b*b-4*a*c;
	if(disc == 0)
	{
		cout<<"\nRoots are real and repeated equal";
	}
	else if(disc < 0)
	{
		cout<<"\nRoots are imaginary and distinct/unequal";
	}
	else
	{
		cout<<"\nRoots are real and distinct/unequal";
	}
}
