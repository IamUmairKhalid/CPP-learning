#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
	int year;
	
	cout<<"Enter a year : ";
	cin>>year;
	
	if(year%4==0)
	{
		cout<<"\nThis year is a leap year.";
	}
	else if(year%100==0)
	{
		cout<<"\nThis year is a leap year.";
	}
	else if(year%400==0)
	{
		cout<<"\nThis year is a leap year.";
	}
	else
	{
		cout<<"\nThis year is not a leap year.";
	}
	
	getch();
	return 0;
}
	