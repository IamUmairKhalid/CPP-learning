#include <iostream>
using namespace std;
main()
{
	int num1,num2,choice;
	cout<<"\n A simple calculator\n";
	cout<<"\ntypes\n";
	cout<<"\n1.addition";
	cout<<"\n2.subtraction";
	cout<<"\n3.product";
	cout<<"\n4.divide\n\n";
	cin>>choice;
	cout<<"\nEnter two numbers: ";
	cin>>num1>>num2;
	switch(choice)
	{
		case 1:
			cout<<"\nsum = "<<num1+num2;
		break;
		case 2:
			cout<<"\ndifference = "<<num1-num2;
		break;
		case 3:
			cout<<"\nproduct = "<<num1*num2;
		break;
		case 4:
			cout<<"\ndivide = "<<num1/num2;
		break;
		default:
   cout<<"\nchoice not exist.";
	}

}
