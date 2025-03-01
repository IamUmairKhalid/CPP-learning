#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main()
{
	int num;
	
	cout<<"Enter a number: ";
	cin>>num;
	
	if(num%2==0)
		cout<<"this number is even";
		else
		cout<<"this number is odd";
	getch();
	return 0;
} 