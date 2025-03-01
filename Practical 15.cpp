#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main()
{
	float a, b, c, larg;
	
	cout<<"Enter 3 numbers: ";
	cin>>a>>b>>c;
	
	if(a>b&&a>c)
	{
	larg=a;cout<<"largest number is : "<<larg;}
	else if(b>a&&b>c)
	{
	larg=b;cout<<"largest number is : "<<larg;}
	else if(c>a&&c>b)
	{
	larg=c;cout<<"largest number is : "<<larg;}
	else
	cout<<"no largest num found!!!";
	
		
	getch();
	return 0;
} 