
/*Write a program to accept a number and check if it is odd.*/
#include <iostream>
using namespace std;

int main()
{
	int num;
	cout<<"Enter an integer number: ";
	cin>>num;
	
	if(num%2 != 0)
		cout<<num<<" Its ODD "<<endl;
	else
		cout<<" This is not odd number."<<endl;
}