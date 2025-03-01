#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
int main()
{
	float f, y, i;
	
	cout<<"Enter inches : ";
	cin>>i;
	
	y=i/36;
	f=i/12;
	i=i/1;
	
	cout<<"\n\nthe converted yards are : "<<setw(10)<<y<<endl;
	cout<<"the converted feets are : "<<setw(10)<<f<<endl;
	cout<<"the converted inches are : "<<setw(9)<<i<<endl;
	
	getch();
	return 0;
} 