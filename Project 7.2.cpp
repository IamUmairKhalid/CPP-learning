#include <iostream>
#include <iomanip> //used for [setw()] that is also a manipulator.
using namespace std;
main()
{
	int price1 = 8540, price2 = 325, price3 = 27800; //variable initialization.
	cout<<"produt	"<<setw(10)<<"price"<<endl;
	cout<<"------	"<<setw(10)<<"-----"<<endl;
	cout<<"hard disk"<<setw(9)<<price1<<endl;
	cout<<"mouse	"<<setw(10)<<price2<<endl;
	cout<<"computer"<<setw(10)<<price3<<endl;
}

