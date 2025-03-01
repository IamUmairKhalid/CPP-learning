#include <iostream>
#include <iomanip>
using namespace std; 
main()
{
	int j,k,l,sum;
	j=1;
	cout<<"enter a upper limit: ";
	cin>>l;
	cout<<"int"<<setw(10)<<"sum\n\n";
	do
	{
		cout<<" "<<j;
		k=1;
		sum=0;
		do
		{
			sum=sum+k;
			k++;
		}
		while(k<=j);
		j++;
		cout<<setw(9)<<sum<<endl;
	}
	while(j<=l);
}
