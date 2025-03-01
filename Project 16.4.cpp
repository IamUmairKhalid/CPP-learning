#include <iostream>
#include <math.h>
using namespace std;
main()
{
	int a,b,c,x,disc;
	cout<<"Enter value of a,b,c: ";
	cin>>a>>b>>c;
	disc = b*b-4*a*c;
	if(disc == 0)
	{
		x=-b/2*a;
		cout<<"\nx = "<<x;
	}
	else if(disc > 0)
	{
		x=(-b+sqrt(disc))/(2*a);
		cout<<"\nx = "<<x;
		x=(-b-sqrt(disc))/(2*a);
		cout<<"\nx = "<<x;
	}
	else 
	{
		cout<<"\nNo real solution";
	}
}
