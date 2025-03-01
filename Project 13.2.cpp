#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int marks;
	cout<<"ENTER THE MARKS: ";
	cin>>marks;
	if(marks>=33)
	{
		cout<<"you have passed"<<endl
		<<"*****congratulations*****";
	}
	else
	{
		cout<<"you have faild"<<endl
		<<"try again";
	}
	getch();
}
