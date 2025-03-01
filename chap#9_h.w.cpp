#include <iostream>
#include <fstream>
#include <string.h>
#include <conio.h>

using namespace std;

int main()
{
	char name[32],urd[5],eng[5],math[5],comp[5],phy[5],pakS[5];
	ofstream file("result.txt",ios::app);
	cout<<"			RESULT		\n\n";
	cout<<"NAME:	URD	ENG	MATH	COMP	PHY	PAK.S\n\n";
	file<<("			RESULT		\n\n");
	file<<("NAME:	URD	ENG	MATH	COMP	PHY	PAK.S\n\n");
	for(int j=1;j<=5;j++)
	{
		cin>>name>>urd>>eng>>math>>comp>>phy>>pakS;
		file<<name<<urd<<eng<<math<<comp<<phy<<pakS;
	}
	file.close();
	return 0;
}
