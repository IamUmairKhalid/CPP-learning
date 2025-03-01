#include <iostream>
using namespace std;
main()
{
	char ch,a;
	cout<<"\nEnter a letter: ";
	cin>>ch;
	switch(ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		cout<<"\nYou entered a vowel.";
			break;
		default:
		cout<<"\nYou entered a consonant.";
	}
}
