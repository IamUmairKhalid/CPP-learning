#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
	int n1, n2, gcd;
	
	cout<<"Enter n1 number : ";
	cin>>n1;
	cout<<"\nEnter n2 number : ";
	cin>>n2;
	
	for(int i=1;i<1000;i++)
	{
		if(n1%i==0&&n2%i==0)
		gcd=i;
	}
	cout<<"\n\nThe GCD of "<<n1<<" and "<<n2<<" is : "<<gcd;
	cout<<"\n\nThe LCM of "<<n1<<" and "<<n2<<" is : "<<(n1*n2)/gcd;
	getch();
	return 0;
}
	