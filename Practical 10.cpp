#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main()
{
	float a, b, c, ratio1,ratio2;
	
	cout<<"Enter 2 numbers: ";
	cin>>a>>b;
	
	if(a>=b)
	{
		ratio1=a/b;
		ratio2=b/b;
	}
	else
	{
		ratio2=b/a;
		ratio1=a/a;
	}
	
	cout<<"\nThe ratio of the numbers is "<<ratio1<<" : "<<ratio2;
	
	getch();
	return 0;
} 