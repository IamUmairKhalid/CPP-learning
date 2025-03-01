#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int mean(int a, int b, int c)
{
	int m=(a+b+c)/3;
	return m;
}
main()
{
	int a,b,c;
	cout<<"Enter three int values : ";cin>>a>>b>>c;
	cout<<endl<<"The mean of three int are : "<<mean(a,b,c);
}

/*int sum(int a,int b)
{
	int s=0;
	s=a+b;
	return s;
}
main()
{
	int x,y;
	cout<<"\nenter any two numbers = ";cin>>x>>y;
	cout<<endl<<"sum of two numbers are : "<<
	sum(x,y);
}
*/