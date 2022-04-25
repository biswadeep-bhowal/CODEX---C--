// PROGRAM TO ILLUSTRATE IF-ELSE

#include<iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter a positive integer : ";
    cin >> n;

    if( n >= 0 )
    {
        if( n % 2 == 0 )    cout << "Even";
        else                cout << "Odd";
    }
    else
        cout << "Invalid Input...";

    return 0;
}
