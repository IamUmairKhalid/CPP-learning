#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

float area(float a);
float peri(float p);

main()
{
	float num,a,length,p;
	cout<<"Enter the length of squar : ";
	cin>>length;
	a=area(length);
	p=peri(length);
	cout<<"\nThe area of the sq is: "<<a;
	cout<<"\nThe perimeter of the sq is: "<<p;
}

float area(float l)
{
	return l*l;
}

float peri(float l)
{
	return 4*l;
}
