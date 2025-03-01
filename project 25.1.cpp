#include <iostream>
using namespace std;
main()
{
	/*int j,marks[5],high; // 5 is the size of arry.
	for(j=0;j<5;j++)
	{
		cout<<"Enter marks of roll no "<<j+1<<": ";
		cin>>marks[j];
	}
	high=0;
	for(j=0;j<5;j++)
	{
		if(high<marks[j])
		{
			high=marks[j];
		}
	}
	cout<<"\nHighest marks are: "<<high;*/
	
	int j,marks[5],low; // 5 is the size of arry.
	for(j=0;j<5;j++)
	{
		cout<<"Enter marks of roll no "<<j+1<<": ";
		cin>>marks[j];
	}
	low=marks[0];
	for(j=0;j<5;j++)
	{
		if(low>marks[j])
		{
			low=marks[j];
		}
	}
	cout<<"\nLowest marks are: "<<low;
}
