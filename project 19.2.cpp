#include <iostream>
using namespace std;
main()
{
	float lbs,kg;
	do
	{
		cout<<"enter kilograms/(0 to quit): ";
		cin>>kg;
		lbs=kg*2.2;
	if(kg>0)
		{
			cout<<endl<<kg<<" kilogram = "<<lbs<<" pounds."<<endl<<endl;
		}
	}
	while(kg!=0);
	cout<<"\ngood bye!";
}
