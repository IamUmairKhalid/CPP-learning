#include <iostream>
using namespace std;
main()
{
	int marks;
	cout<<"Enter marks:(0 to 100) ";
	cin>>marks;
	if(marks<0||marks>100)
	{
		cout<<"\ninvalid marks!!!";
		//exit(0); //exit function.
	}
	else
	{
		if(marks>=33)
		{
			cout<<"\nYou are pass. ";
		}
		else
		{
			cout<<"\nYou are fail.";
		}
	}
}

