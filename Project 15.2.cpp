#include <iostream>
using namespace std;
main()
{
	int a;
	cout<<"\nEnter an integer(1-7): ";
	cin>>a;
	switch(a)
	{
		case 1:
			cout<<"\nMonday";
		break;
		case 2:
			cout<<"\nTuesday";
		break;
		case 3:
			cout<<"\nWednesday";
		break;
		case 4:
			cout<<"\nThursday";
		break;
		case 5:
   			cout<<"\nFridat";
   		break;
		case 6:
			cout<<"\nSaturday";
		break;
		case 7:
   			cout<<"\nSunday";
   		break;
   		default:
   			cout<<"Choice not exists.";
	}

}
