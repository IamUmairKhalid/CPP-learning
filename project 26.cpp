#include <iostream>
using namespace std;
main()
{
	int j,marks[10],sum=0,avg;
	for(j=0;j<10;j++)
	{
		cout<<"Enter marks of roll no "<<j+1<<": ";
		cin>>marks[j];
		sum+=marks[j];
	}
	avg=sum/10;
	cout<<"\nAbove average marks are: \n";
	for(j=0;j<10;j++)
	{
		if(marks[j]>avg)
		{
			cout<<marks[j]<<" ";
		}
	}
	
}
