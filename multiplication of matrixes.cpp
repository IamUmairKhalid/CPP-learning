#include <iostream>
using namespace std;
int main()
/*
//multiplication
{                       
	int A[2][2]={{1,2},{3,4}},B[2][2]={{5,6},{7,8}},pro[2][2]={0};
	int k=1,l=0;
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			pro[i][i]+=A[i][j]*B[j][i];		
		}
	}
	
	for(int i=0;i<2;i++)
	{
		for(int j=k;j>l;j--)
		{
			for(int m=0;m<2;m++)
			{
				pro[i][j]+=A[i][m]*B[m][j];
			}
		}
		k=0;
		l--;
	}
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<pro[i][j]<<"  ";
		}
		cout<<endl;
	}
	
	return 0;
} 
*/
//transpose
{
int arr[3][3];

for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>arr[i][j];		
		}
		cout<<endl;
	}

for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<arr[j][i];		
		}
		cout<<endl;
	}
	return 0;
}