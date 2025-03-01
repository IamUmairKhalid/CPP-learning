#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	float gallons, liters;
	
	cout<<"enter numbers of gallons: ";
	cin>>gallons;
	
	liters=gallons*3.7854;
	
	cout<<"\nGallons in liters are :"<<liters<<endl<<endl;
	
	getch();
	return 0;
}