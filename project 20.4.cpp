#include <iostream>
#include <iomanip>
using namespace std; 
main()
{
	int j,k,l,pro;
	j=1;
	cout<<"enter a upper limit: ";
	cin>>l;
	cout<<"int"<<setw(10)<<"sum\n\n";
	while(j<=l)
	{
		cout<<" "<<j;
		k=1;
		pro=1;
		while(k<=j)
		{
			pro=pro*k;
			k++;
		}
	    j++;
	    cout<<setw(9)<<pro<<endl;
    }
	
}
