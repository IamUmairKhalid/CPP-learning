#include <iostream>
#include <iomanip>
using namespace std; 
main()
{
	int j,k,l,sum;
	cout<<"enter a upper limit: ";
	cin>>l;
	cout<<"int"<<setw(8)<<"sum\n\n";
	for(j=1;j<=l;j++)
	{
		cout<<" "<<j;
		sum=0;
		for(k=1;k<=j;k++)
		{
			sum=sum+k;
		}
	    cout<<setw(7)<<sum<<endl;
    }
	
}
