#include <iostream>
using namespace std;
main()
{
	float eng, urdu, phy, isl, com, math, total, per;
	cout<<"ENTER THE MARKS OF ENGLISH:  ";
	cin>>eng;
	cout<<endl<<"ENTER THE MARKS OF URDU:     ";
	cin>>urdu;
	cout<<endl<<"ENTER THE MARKS OF PHYSICS:  ";
	cin>>phy;
	cout<<endl<<"ENTER THE MARKS OF ISLAMYAT: ";
	cin>>isl;
	cout<<endl<<"ENTER THE MARKS OF COMPUTER: ";
	cin>>com;
	cout<<endl<<"ENTER THE MARKS OF MATH:     ";
	cin>>math;
	total = eng+urdu+phy+isl+com+math;
	cout<<"\nTOTAL = "<<total;
	per = (total/550)*100;
	cout<<"\nPERCENTAGE = "<<per<<"%";
}

