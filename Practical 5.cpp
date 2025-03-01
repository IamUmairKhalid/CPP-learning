#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main()
{
	int random, guess;
	
	random=rand();
	
	cout<<"Enter your guess number : ";
	cin>>guess;
	
	if(guess == random)
	cout<<"The number you guess is true!!!";
	else
	cout<<"The number you guess is not true, the number is : "<<random;
	
	getch();
	return 0;
} 