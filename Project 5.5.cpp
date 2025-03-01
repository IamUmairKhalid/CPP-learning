#include <iostream>
using namespace std;
main()
{
	int amount, a, b, c, d, e, f, g, h, i, x, y;
	cout<<"ENTER THE AMOUNT: ";
	cin>>amount;
	a = amount/1000;
	cout<<"\n1000 = "<<a;
	x = amount%1000;
	b = x/500;
	cout<<"\n500 = "<<b;
	y = (x%500);
	c = y/100;
	cout<<"\n100 = "<<c;
	x = (y%100);
	d = x/50;
	cout<<"\n50 = "<<d;
	y = (x%50);
	e = y/20;
	cout<<"\n20 = "<<e;
	x = (y%20);
	f = x/10;
	cout<<"\n10 = "<<f;
	y = (x%10);
	g = y/5;
	cout<<"\n5 = "<<g;
	x = (y%5);
	h = x/2;
	cout<<"\n2 = "<<h;
	y = (x%2);
	i = y/1;
	cout<<"\n1 = "<<i;
}
