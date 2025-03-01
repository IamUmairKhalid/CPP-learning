//arithmetic assignment operators.
#include <iostream>
using namespace std;
main()
{
	int a = 5, b = 20, x = 10, y = 15, z = 25;
	a += 5; //a=a+5
	b -= 10; //b=b-10
	x *= 2; //x=x*2
	y /= 3; //y=y/3
	z %= 7; //z=z%7
	
	cout<<a<<endl<<b<<endl<<x<<endl<<y<<endl<<z;
}
