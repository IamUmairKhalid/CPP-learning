#include <iostream>
using namespace std;
main()
{	int j,marks[5],pass,fail,inv; 
	for(j=0;j<5;j++)
	{
		cout<<"Enter marks of roll no "<<j+1<<": ";
		cin>>marks[j];
	}
	pass=0;
	fail=0;
	for(j=0;j<5;j++)
	{
		if(marks[j]>=33&&marks[j]<=100)
		{
			pass=pass+1;
		}
		else if(marks[j]<33&&marks[j]>=0)
		{
			fail=fail+1;
		}
		else
		{
			inv=inv+1;
		}
	}
	cout<<"\nNum of pass students are: "<<pass;
	cout<<"\nNum of fail students are: "<<fail;
	cout<<"\nNum of invalid entries are: "<<inv;
}
