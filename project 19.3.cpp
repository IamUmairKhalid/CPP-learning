#include <iostream>
using namespace std; 
main()
{
	int marks;
	do
	{
		cout<<"enter your marks/negative to quit: ";
		cin>>marks;
		if(marks>=0)
		{
		if(marks>=33)
		{
			cout<<"\nyour are pass...\n\n";
		}
		else
		{
			cout<<"\nyou are fail...\n\n";
		}
		}
	}
	while(marks>=0);
	cout<<"\nGoodbye!";
}
