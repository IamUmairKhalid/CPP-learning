#include <iostream>
#include <iomanip>
using namespace std; 
main()
{
	int row,col;
	for(row=1;row<=10;row++)
	{
		cout<<"\n";
		for(col=1;col<=10;col++)
		{
			cout<<setw(3)<<row*col;
		}
			
	}
}
