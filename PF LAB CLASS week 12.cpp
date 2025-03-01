#include <iostream>
using namespace std;
int main()
{
	//LAB_TASK #1.
	/*
	int score[2][6];
	float RRR=0, t_runs, t_over=2;
	for(int i=0;i<2;i++)
	{
		cout<<"Enter the Sore in each ball of the over "<<i+1<<": ";
		for(int j=0;j<6;j++)
		{
			cout<<endl;
			cout<<"BAll "<<j+1<<": ";cin>>score[i][j];
			t_runs+=score[i][j];
		}
		cout<<endl;
	}
	RRR=(t_runs+1)/t_over;
	cout<<"Total score: "<<t_runs<<endl;
	cout<<"Score required to draw match: "<<t_runs<<endl;
	cout<<"RRR to win the match: "<<RRR<<endl;
	*/
	
	//LAB_TASK #2.
	
	int choice, goods[100][2]={0}, item=0, t_items=0;
	int flag=0, total=0, pro=1, bill=0, count=0, pay;
	char choice2;
	
	cout<<"Select A choice from given:\n";
	for( ; ; )
	{
		cout<<"\n1.	New Sale\n2.	Exit";
		cout<<"\n\nPress 1 for New Sale OR 2 for Exit: ";cin>>choice;
		if(choice==2)
		{
			break;
		}
		else if(choice==1)
		{
			flag;
			for(int i=flag;i<100;i++)
			{
				cout<<"\nEnter Quantity of Product: ";
				for(int j=0;j<2;j++)
				{
					cin>>goods[i][j];
					item=goods[i][0];
					total=goods[i][1];
					if(j!=1)
					{
						cout<<"\nEnter Price of Product: Rs";
					}
				}
				flag++;
				count++;
				t_items+=item;
				bill+=item*total;
				cout<<"\nYou have "<<t_items<<" ITEMS of Rs"<<bill;
				cout<<"\n\nDo you want to add more items:\n\n";
				cout<<"Press 'Y' to add more OR 'N' for Continue: ";
				cin>>choice2;
				if(choice2=='y'||choice=='Y')
				{
					continue;
				}
				else
				{
					break;
				}
			}
		}
		else
		{
			cout<<"\nInvalid Choice!!!\n";
		}
		cout<<"\n\nDo you want to choose again from given:\n";
	}

			for(int i=1;i<=30;i++)
			{
				cout<<"_";
			}
			cout<<"\n\nSN	ITEMS		PRICE\n";
			for(int i=1;i<=30;i++)
			{
				cout<<"_";
			}
			cout<<endl<<endl;
				for(int i=0;i<count;i++)
				{
					cout<<i+1;
					for(int j=0;j<2;j++)
					{
						cout<<"	"<<goods[i][j]<<"	";
					}
					cout<<"\n";
				}
			for(int i=1;i<=30;i++)
			{
				cout<<"_";
			}
			cout<<"\n\nTotal ITEMS: "<<t_items;
			cout<<"\nTotal BILL: Rs"<<bill;
			for( ; ; )
			{
				cout<<"\nEnter Payment: Rs";cin>>pay;
				if(pay>=bill)
				{
					break;
				}
				else
				{
					cout<<"\nEnter full Amount!!!\n";
				}
			}
			if(pay==bill)
			{
				cout<<"\nThank You!!!\n";
			}
			else if(pay>bill)
			{
				cout<<"\nYour Change: Rs"<<pay-bill;
				cout<<"\n\nThank You!!!\n";
			}

	return 0;
}