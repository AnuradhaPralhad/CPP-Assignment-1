//Write a program to accept a number N and calculate N!

#include<iostream>
using namespace std;
int main()
{
    int i, n, num, sum=0;
    cout<<"Enter count of number";
    cin>>n;
    cout<<"Enter "<<n<<" numbers: ";
    for(i=0; i<n; i++)
    {
        cin>>num;
        sum = sum+num;
    }
    cout<<"\n Sum of all "<<n<<" numbers is "<<sum;
    cout<<endl;
    return 0;
}