/*Write a program to accept a number and check if it is negative.*/
#include <iostream>
using namespace std;

int main()
{
    int num;
	cout<<"Enter number: ";
	cin>>num;
	
    if (num < 0)
         cout << "Its  Negative ";
    else if (num > 0)
        cout << "Its positive";
    else
        cout << "Zero";
    
    return 0;
}