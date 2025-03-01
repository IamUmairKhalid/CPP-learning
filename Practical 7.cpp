#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main()
{
	int a, b, c, d, e, total, sum;
	float per;
	
	cout<<"Enter the total marks of 5 subjects: ";
	cin>>total;
	
	cout<<"\nEnter the marks of 5 subjects: ";
	cin>>a>>b>>c>>d>>e;
	
	sum=a+b+c+d+e;
	per=sum*100/total;
	
	cout<<"\nThe marks you obtain = "<<sum;
	
	cout<<"\nPercentage of your marks = "<<per<<"%";
	
	if(per>=33)
	cout<<"\nYour are pass!!!";
	else
	cout<<"\nYou are fail...";
	
	getch();
	return 0;
} 