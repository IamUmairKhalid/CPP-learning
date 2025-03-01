#include <iostream>
#include <iomanip>
using namespace std; 
main()
{
	int j,k,l,pro;
	cout<<"enter a upper limit: ";
	cin>>l;
	cout<<"int"<<setw(8)<<"sum\n\n";
	for(j=1;j<=l;j++)
	{
		cout<<" "<<j;
		pro=1;
		for(k=1;k<=j;k++)
		{
			pro=pro*k;
		}
	    cout<<setw(7)<<pro<<endl;
    }
	
}
