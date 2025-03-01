#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main()
{
	int i;
	
	cout<<"Enter any integer (positive or negative) : ";
	cin>>i;
	
	if(i>=0)
	cout<<"\nAbsolute value of "<<i<<" is "<<i;
	else
	cout<<"\nAbsolute value of "<<i<<" is "<<i*(-1);
	
	getch();
	return 0;
} 