#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	float p,r,t,i;
	
	cout<<"Enter principle(amount): ";
	cin>>p;
	cout<<"Enter rate: ";
	cin>>r;
	cout<<"Enter time: ";
	cin>>t;
	
	i=(p*r*t)/100;
	
	cout<<"Simple interest: "<<i;
	getch();
	return 0;
}