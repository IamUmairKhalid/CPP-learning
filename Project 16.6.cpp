#include <iostream>
#include <math.h>
using namespace std;
main()
{
	float temp;
	cout<<"Enter temperature in celcius: ";
	cin>>temp;
	if(temp<=10)
	{
		cout<<"\nTemperature is low";
	}
	else if(temp>=11&&temp<=25)
	{
		cout<<"\nTemperature is Normal";
	}
	else if(temp>=26)
	{
		cout<<"\nTemperature is High";
	}
}
