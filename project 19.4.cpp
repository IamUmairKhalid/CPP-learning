#include <iostream>
using namespace std; 
main()
{
	int num=1;
	char ch=1;
	do
	{
		cout<<num<<" = "<<ch<<endl;
		num++;
		ch++;
	}
	while(ch<=126&&num<=126);
	cout<<"\nGoodbye!";
}
