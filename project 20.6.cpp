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
	while(j<=l)
	{
		cout<<" "<<j;
		k=1;
		sum=0;
		while(k<=j)
		{
			sum=sum+k;
			k++;
		}
		cout<<setw(9)<<sum<<endl;
		j++;
	}
}
