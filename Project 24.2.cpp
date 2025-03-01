#include <iostream>
using namespace std;
main()
{
	int j,pre,cur,next;
	cur=1;
	pre=0;
	for(j=1;j<=11;j++)
	{
		cout<<cur<<",";
		next=pre+cur;
		pre=cur;
		cur=next;
	}
}

