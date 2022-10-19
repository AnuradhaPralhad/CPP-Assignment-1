//Write a program to accept 2 numbers A,B and check if A is divisible by B.
#include<iostream>
using namespace std;
 
int main()
{
    int A, B;
 
    cout << "Enter the numbers : ";
    cin >> A >> B;
 
    if (A % B == 0)
        cout << "First number " << A
             << " is divisible by second number "
             << B;
    else
        cout << "First number " << A 
             << " is not divisible by second number "
             << B;
}