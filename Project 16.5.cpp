#include <iostream>
#include <math.h>
using namespace std;
main()
{
	float basic_pay,net_pay,house_rent;
	cout<<"Enter basic_pay";
	cin>>basic_pay;
	if(basic_pay<30000)
	{
		house_rent=basic_pay*0.3;
	}
	else if(basic_pay>=30000&&basic_pay<=50000)
	{
		house_rent=basic_pay*0.35;
	}
	else if(basic_pay>50000)
	{
		house_rent=basic_pay*0.4;
	}
	net_pay=basic_pay+house_rent;
	cout<<"net_pay = "<<net_pay;
}
