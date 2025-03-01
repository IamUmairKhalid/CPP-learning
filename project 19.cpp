#include <iostream>
#include <iomanip>
using namespace std;
main()
{
	int f;
	float c;
	cout<<"\nfarenheit\t\tcelsius\n";
	cout<<"=========\t\t=======\n";
	for(f=50;f<=100;f+=5)
	{
		c=5.0/9*(f-32);
		cout<<setw(6)<<f<<"\t\t\t"<<setw(5)<<c<<endl;
		
	}
}
