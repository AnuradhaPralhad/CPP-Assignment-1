/* Write a program to accept a number and check if it is positive.*/
#include <iostream>
using namespace std;

int main()
{
    int num;
	cout<<"Enter an number: ";
	cin>>num;
	
    
    if (num > 0)
         cout << "Its positive";
    else if (num < 0)
        cout << "Its negative";
    else
        cout << "Zero";
    
    return 0;
}