#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
	float a, b, c, root1, root2, d;
	
	cout<<"Enter value of a,b and c : ";
	cin>>a>>b>>c;
	
	d=b*b-4*a*c;
	if(d==0)
	{
		root1= -(b+ sqrt(d))/(2*a);
		root2= -(b- sqrt(d))/(2*a);
		cout<<"\nRoots are real and equal";
	}
	else if(d>0)
	{
		root1= -(b+ sqrt(d))/(2*a);
		root2= -(b- sqrt(d))/(2*a);
		cout<<"\nRoots are real and distinct";
	}
	else
	{
		root1= -(b+ sqrt(d))/(2*a);
		root2= -(b- sqrt(d))/(2*a);
		cout<<"\nRoots are imaginary";
	}
	
	cout<<"\nRoot1 = "<<root1<<" and Root2 = "<<root2;
	
	getch();
	return 0;
}
	