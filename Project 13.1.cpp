#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int x,y,sum,prod;
	cout<<"ENTER FIRST NUMBER: ";
	cin>>x;
	cout<<"ENTER SECOND NUMBER: ";
	cin>>y;
	if(x>0)
	{
		sum=x+y;
		prod=x*y;
		cout<<"\nSUM = "<<sum<<endl;
		cout<<"\nPRODUCT = "<<prod;
	}
	getch();
}
