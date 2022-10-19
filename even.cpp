/*Write a program to accept a number and check if it is even.*/
#include <iostream>
using namespace std;

int main()
{
	int num;
	cout<<"Enter an integer number: ";
	cin>>num;
	
	if(num%2==0)
		cout<<num<<" It is an EVEN number."<<endl;
	else
		cout<<" This is not an Even Number."<<endl;
	
	return 0;
}