//increment/decrement.
#include <iostream>
using namespace std;
main()
{
	int a = 5, b = 20, x = 10, y = 15;
	cout<<a++; // postfix notation: in postfix notation the increment applied after the execution.
	cout<<endl<<a;
	
	cout<<endl<<++b; // prefix notation: in prefix notation the increment applied before execution. 
	cout<<endl<<b;
	
	cout<<endl<<x--; // postfix notation: in postfix notation the decrement applied after the execution.
	cout<<endl<<x;
	
	cout<<endl<<--y; // prefix notation: in prefix notation the decrement applied before execution. 
	cout<<endl<<y;
}
