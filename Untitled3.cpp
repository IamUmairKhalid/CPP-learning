#include <iostream>
#include <iomanip>
using namespace std;

int power(int b,int p);

main()
{
	int num,b,p,ans;
	cout<<"Enter base and power: ";
	cin>>b>>p;
	ans=power(b,p);
	cout<<"answer is: "<<ans;
}

int power(int b,int p)
{
	int j,a=1;
	for(j=1;j<=p;j++)
	{
		a=a*b;
	}
	return a;
}
