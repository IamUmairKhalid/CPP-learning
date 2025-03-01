#include <iostream>
using namespace std;
main()
{
	int num,cube;
	char response = 'y';
	while(response=='y')
	{
		cout<<"\nEnter a number: ";
		cin>>num;
		cube=num*num*num;
		cout<<"\nThe cube of "<<num<<" is: "<<cube;
		cout<<"\n\nDo you want to countinue(y/n)?";
		cin>>response;
	}
}
