#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

/*void addone(int &y)
{
	y++; //changing values in function.
	
}
main()
{
	int x=55;
	cout<<"x in main() before call ="<<x<<endl;
	addone(x);cout<<"x in main() after call ="<<x<<endl;
}
*/

void duplicate(int &a,int &b,int &c)
{
	a=a*2;
	b=b*2;
	c=c*2;
}
main()
{
	int x=1,y=3,z=7;
	cout<<"values of x,y and z in main () before calling function\n";
	cout<<"x= "<<x<<"y= "<<y<<"z= "<<z<<endl;
	duplicate(x,y,z);
	cout<<"values of x,y and z in main () after calling function\n";
	cout<<"x= "<<x<<"y= "<<y<<"z= "<<z<<endl;
}