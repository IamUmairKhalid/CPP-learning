#include <iostream>
using namespace std;
int main()
{
	//Program #1.
	
	int floors;
		cout<<"Enter the numbers of floors in Hotel(greater than -1):";cin>>floors;
		cout<<endl;
	const int size=floors;
	int rooms[size],O_rooms[size],sum=0,sum1=0;
	float O_perc;
	for(int i=0;i<size;i++)
	{
		cout<<"\nEnter the number of rooms in "<<i+1<<" floor(greater than 10):";
		cin>>rooms[i];
		cout<<"Enter the number of rooms occupied in "<<i+1<<" floor:";
		cin>>O_rooms[i];
	}
	for(int i=0;i<size;i++)
	{
		sum+=rooms[i];
		sum1+=O_rooms[i];
	}
    O_perc=(sum1*100)/sum;
	cout<<"\n\nYou have total ("<<sum<<") rooms in Hotel"<<endl;
	cout<<"\n\nYou have total ("<<sum1<<") rooms occupied in Hotel"<<endl;
	cout<<"\n\nYou have total ("<<sum-sum1<<") rooms not occupied in Hotel"<<endl;
	cout<<"\n\nYou have total ("<<O_perc<<" %) rooms occupied in Hotel"<<endl;
	
	//Program #2.
	/*
	int sales[5],starics;
	
	for(int i=0;i<5;i++)
	{
		cout<<"Enter today's sales for store "<<i+1<<" :";
		cin>>sales[i];
	}
	
	cout<<"\nSALES BAR CHART (Each * = Rs.100)\n\n";
	
	for(int i=0;i<5;i++)
	{
		cout<<"store "<<i+1<<":";
		starics=sales[i]/100;
		for(int i=1;i<=starics;i++)
		{
			cout<<"*";
		}
	cout<<endl;
	}
	*/
	//Program #3.
	/*
	char choice;
	float quan, per, total, choice2;
	cout<<"Select your choice:";
	cout<<"\nM MEALS";
	cout<<"\nB BEVERAGES\n";
	cout<<"\nPress M for MEALS OR B for BEVERAGES: ";cin>>choice;
	if(choice=='m'||choice=='M')
	{
		cout<<"\nSelect your MEAlS and Quantity:\n";
		cout<<"\n1. Burger Rs. 450";
		cout<<"\n2. Roll Paratha Rs. 220";
		cout<<"\n3. Spaghetti Rs. 300";
		cout<<"\n\nEnter MEAL Number: ";cin>>choice2;
		if(choice2==1)
		{
			cout<<"\nEnter Quantity: ";cin>>quan;
			per=quan*450*0.035;
			total=quan*450+per;		
		}
		else if(choice2==2)
		{
			cout<<"\nEnter Quantity: ";cin>>quan;
			per=quan*220*0.035;
			total=quan*220+per;		
		}
		else if(choice2==3)
		{
			cout<<"\nEnter Quantity: ";cin>>quan;
			per=quan*300*0.035;
			total=quan*300+per;			
		}
	}
	else if(choice=='b'||choice=='B')
	{
		cout<<"\nSelect your MEAl and Quantity:\n";
		cout<<"\n1. Coffee Rs 200/cup";
		cout<<"\n2. Fresh Juice Rs. 350/glass";
		cout<<"\n3. Green Tea Rs. 75/cup";
		cout<<"\n\nEnter MEAL Number: ";cin>>choice2;
		if(choice2==1)
		{
			cout<<"\nEnter Quantity: ";cin>>quan;
			per=quan*200*0.035;
			total=quan*200+per;		
		}
		else if(choice2==2)
		{
			cout<<"\nEnter Quantity: ";cin>>quan;
			per=quan*350*0.035;
			total=quan*350+per;		
		}
		else if(choice2==3)
		{
			cout<<"\nEnter Quantity: ";cin>>quan;
			per=quan*75*0.035;
			total=quan*75+per;			
		}
	}	
	cout<<"\nTotal bill including 3.5% Tax is: "<<total<<endl;
	*/
	return 0;
}