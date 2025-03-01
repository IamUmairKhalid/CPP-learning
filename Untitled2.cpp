#include <iostream>
#include <iomanip>
using namespace std;

void table(int n);

main()
{
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	
	table(num);
}

void table(int n)
{
	int j;
	for(j=1;j<=10;j++)
	{
		cout<<"\n\n"<<n<<" x "<<j<<setw(3)<<"="<<setw(3)<<j*n;
	}
}
