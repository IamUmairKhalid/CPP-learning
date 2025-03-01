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
	
	larg=a>b?(a>c?a:c):(b>c?b:c);
	cout<<"Largest number is :"<<larg;
		
	getch();
	return 0;
} 