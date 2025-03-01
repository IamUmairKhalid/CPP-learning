#include <iostream>
using namespace std;
main()
{
	int marks;
	char grade;
	cout<<"Enter the marks(max 100): ";
	cin>>marks;
	if(marks>=80)
	{
		grade = 'A';
	}
	else if(marks>=70)
	{
		grade = 'B';
	}
	else if(marks>=60)
	{
		grade = 'C';
	}
	else if(marks>=50)
	{
		grade = 'D';
	}
	else
	{
		grade = 'F';
	}
	cout<<"your grade is:"<<grade;
}
