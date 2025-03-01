#include <iostream>
using namespace std;
main()
{
	char ch = '\''; // \' is used to display single quote as char.
	cout<<"my name is umair.\n" // \n is used for move cursor to the begining of next line.
		<<"i live in kotli.";
	cout<<endl<<"i study in fg college kotli\tmy group is ics."; // \t is uesd for tab space.
	cout<<endl<<"i love kashmir \bI also love pakistan."; // \b is for bakespace.
	cout<<endl<<"kotli is the city of mosque.\rand"; // \r is used to move cursor to the begining of current line.
	cout<<endl<<"we use escape sequense \\n for line changing."; // \\ is used to display a escape squence in output.
	cout<<endl<<"he said,\"i am ill\"."; // \" is used to display double quotes in output.
	cout<<endl<<"ch is "<<ch;
	cout<<endl<<"\a"; // \a is used to produce sound.
}

