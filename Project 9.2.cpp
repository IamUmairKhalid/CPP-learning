#include <iostream>
using namespace std;
main()
{
	//Assignment Operatores ( = ).
	//Arithmetic OPeratores ( * / % + - ).
	//Relational Operatores ( < > <= >= == != ).
	//Logical Operatores ( AND(&&), OR(||), NOT(!).
	//AND (true && false = false), (true && true = true), (false && true = false), (false && false = false).
	//OR (true || false = true), (true || true = true), (false || true = true), (false || false = false).
	//NOT ().
	int x, y, z, a ,b;
	x = 12;
	y = 13;
	z = 15;
	a = (x<y) && (y<z);
	cout<<a;
	b = (z<x) || (y>x);
	cout<<endl<<b;
}
