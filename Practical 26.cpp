#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
	int choice;int f,c,t;
	
	cout<<"Enter your choice : ";
	cout<<"\n(1)Fahrenheit to celsius.";
	cout<<"\n(2)Celsius to fahrenheit.\n";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			cout<<"\nEnter Temperatur in Fahrenheit : ";
			cin>>f;
			t=(f-32)/1.8;
			cout<<"\nTemperatue in Celsius is : "<<t;
			break;
		case 2:
			cout<<"\nEnter Temperatur in Celsius : ";
			cin>>c;
			t=(c*1.8)+32;
			cout<<"\nTemperatue in Fahrenheit is : "<<t;
			break;
	}
	
	getch();
	return 0;
}
	