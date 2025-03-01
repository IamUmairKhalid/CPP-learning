#include <iostream>
using namespace std;
class patient
{
	private:
		char name[10];
		int age;
		char disease[10];
	public:
		void get_pat();
		void show_pat();
};
class indoor : public patient
{
	private:
		int bed_no,ward_no;
	public:
		void get_indoorP();
		void show_indoorP();
};
class outdoor : public patient
{
	private:
		char date[11];
	public:
		void get_outdoorP();
		void show_outdoorP();		
};
void patient::get_pat()
{
	cout<<"\nEnter patient's name: ";cin>>name;
	cout<<"\nEnter patient's age: ";cin>>age;
	cout<<"\nEnter patient's disease: ";cin>>disease;
}
void patient::show_pat()
{
	cout<<"\npatient's name is: "<<name;
	cout<<"\npatient's age is: "<<age;
	cout<<"\npatient's disease is: "<<disease;
}
void indoor::get_indoorP()
{
	patient::get_pat();
	cout<<"\nEnter bed_no: ";cin>>bed_no;
	cout<<"\nEnter ward_no: ";cin>>ward_no;
}
void indoor::show_indoorP()
{
	patient::show_pat();
	cout<<"\bed_no is: "<<bed_no;
	cout<<"\nward_no is: "<<ward_no;
}
void outdoor::get_outdoorP()
{
	patient::get_pat();
	cout<<"\nEnter next visit date: ";cin>>date;
}
void outdoor::show_outdoorP()
{
	patient::show_pat();
	cout<<"\nnext visit date is :"<<date;
}
int main()
{
	indoor p1;outdoor p2;
	p1.get_indoorP();
	p2.get_outdoorP();
	p1.show_indoorP();
	p2.show_outdoorP();
	return 0;
}