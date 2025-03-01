#include <iostream>
using namespace std;
main()
{
	int rem,quo,num;
	cout<<"Enter a number: ";
	cin>>num;
	quo=num;
	while(quo!=0)
	{
		rem=quo%10;
		cout<<rem;
		quo=quo/10;
	}
}

