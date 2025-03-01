#include <iostream>
using namespace std; 
main()
{
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	while(n!=0)
	{
		cout<<endl<<n*n<<endl;
		cout<<"\nEnter a number(0 to quit):"<<endl;
		cin>>n;	
	}
	cout<<"Goodbye!";
}

