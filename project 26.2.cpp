#include <iostream>
using namespace std;
main()
{
	int j,i,a[50],n,hold;
	cout<<"Enter num of elements in the list: ";
	cin>>n;
	cout<<"\n";
	for(j=0;j<n;j++)
	{
		cout<<"Enter the number: ";
		cin>>a[j];
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<(n-1);j++)
		{
		if((a[j])>(a[j+1]))
			{
				hold=a[j];
				a[j]=a[j+1];
				a[j+1]=hold;
			}
		}
	}
	cout<<"\n***sorted array***\n";
	for(j=0;j<n;j++)
	cout<<'\n'<<a[j];
}
