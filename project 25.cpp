//arry and strings.
#include <iostream>
using namespace std;
main()
{
	int j,marks[5],sum; // 5 is the size of arry.
	float avg;
	sum=0;
	for(j=0;j<5;j++)
	{
		cout<<"Enter marks of roll no "<<j+1<<": ";
		cin>>marks[j]; //j is used for index or subscript.
		sum=sum+marks[j]; //index start from 0 and end at size 1.
	}
	avg=sum/5.0;
	cout<<"\nAverage marks of all the students of the class: "<<avg;
}
