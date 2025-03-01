#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	float basic, hra, da, ma, pf, ins, net, gross;
	
	cout<<"enter your basic salary: ";
	cin>>basic;
	cout<<"enter your house rent allowance: ";
	cin>>hra;
	cout<<"dearness allowance: ";
	cin>>da;
	cout<<"medical allowance: ";
	cin>>ma;
	cout<<"provident fund and insurance fund: ";
	cin>>pf>>ins;
	
	gross=basic+(hra*basic)/100+(da*basic)/100;
	gross=gross+(ma*basic)/100;
	net=gross-(pf+ins);
	
	cout<<"\ngross salary: "<<gross<<"rupees"<<endl;
	cout<<"net salary: "<<net<<"rupees"<<endl<<endl;
	getch();
	return 0;
}