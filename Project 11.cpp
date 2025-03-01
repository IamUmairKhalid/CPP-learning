#include <iostream>
#include <iomanip>
using namespace std;
main()
{
	int a, b, c, d, e, f, g;
	cout<<"ENTER FIRST INT:  ";
	cin>>a;
	cout<<"\nENTER SECOND INT: ";
	cin>>b;
	cout<<"\nENTER THIRD INT:  ";
	cin>>c;
	cout<<"\nENTER FOURTH INT: ";
	cin>>d;
	e = a+b+c+d;
	f = a*b*c*d;
	g = a+b+c+d/4;
	cout<<"\nsum of four integers is:     "<<setw(10)<<e<<endl;
	cout<<"product of four integers is: "<<setw(10)<<f<<endl;
	cout<<"average of four integers is: "<<setw(10)<<g;
}
