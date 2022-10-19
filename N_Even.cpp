//Write a program to accept a number N and print the first N even numbers.

#include <iostream>

using namespace std;

int main() {

    int i, n;
    cout << "Accept Number N: ";
    cin >> n;
    cout << endl << "Even numbers from 1 to " << n ;
    for(i = 1; i <= n; i++) {

        if((i % 2) == 0) 
        {
             
            cout<< "\n"<<i;

        }
    }
    
    return 0;

}