#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
	int num, fact=1, i;
	
	cout<<"Enter any number : ";
	cin>>num;
	for(i=num;i>=1;i--)
	{
		fact=fact*i;
	}
	cout<<"The factorial of "<<num<<" is : "<<fact;
	getch();
	return 0;
}
	