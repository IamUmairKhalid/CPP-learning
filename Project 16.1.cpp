#include <iostream>
using namespace std;
main()
{
	int num;
	cout<<"\nEnter any number: ";
	cin>>num;
	switch(num%7)
	{
		case 0:
		cout<<"\nThe number is divisible by 7.";
			break;
		default:
		cout<<"\nThe number is not
		
		 divisible by 7 .";
	}
}
