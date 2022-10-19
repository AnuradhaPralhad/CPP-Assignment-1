//Write a program to accept a number N and print the first N natural numbers.
#include<iostream>
using namespace std;

int main()
{
	int number;
	
	cout << "\n Please Enter Integer Value to print Natural Numbers =  ";
	cin >> number;
	
	cout << "\n List of Natural Numbers from 1 to " << number << " are\n"; 
	for(int i = 1; i <= number; i++)
  	{
		cout << i <<" ";
  	}
		
 	return 0;
}