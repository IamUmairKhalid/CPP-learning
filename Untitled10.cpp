#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

void encrypt( char p[10]);
main()
{
	char pwd[10];
	cout<<"Enter your password: ";
	cin.get(pwd,10);
	encrypt(pwd);
	cout<<pwd;
}

void encrypt(char p[10])
{
	int j;
	j=0;
	while(j<10)
	{
		switch(p[j])
		{
			case 'a': p[j]='B'; break;
			case 'b': p[j]='C'; break;
			case 'c': p[j]='D'; break;
			case '1': p[j]='2'; break;
			case '2': p[j]='3'; break;
		}
		j++;
	}
	
}
