#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char name[20],filename[25],contact[19];
	int age;
	ofstream  myfile;
	cout<<"Enter file name you want top create: ";cin>>filename;
	cout<<"\nEnter your name: ";cin>>name;
	cout<<"\nEnter your age: ";cin>>age;
	cout<<"\nEnter your contact NO: ";cin>>contact;
	myfile.open(filename,ios::app);
	myfile<<"Name :\t\t"<<name;
	myfile<<"\nAge :\t\t"<<age;
	myfile<<"\nContact :\t"<<contact<<"\n\n";
	myfile.close();
	return 0;
}
