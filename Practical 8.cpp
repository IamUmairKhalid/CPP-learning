#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main()
{
	int a, b, c, pro, sum, ave;
	
	cout<<"Enter 3 numbers: ";
	cin>>a>>b>>c;
	
	
	sum=a+b+c;
	pro=a*b*c;
	ave=(a+b+c)/3;
	cout<<"\nThe sum of the numbers = "<<sum;
	
	cout<<"\nThe product of the numbers = "<<pro;
	
	cout<<"\nYour average of the numbers = "<<ave;
	
	getch();
	return 0;
} 