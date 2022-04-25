// PROGRAM TO CALCULATE SUM OF ALL THE ELEMENTS OF AN RECURSIVELY

#include<iostream>
using namespace std;

int sum( int* arr, int n, int index, int s )
{
    if( index == n )
        return s;

    s += arr[ index++ ];
    return sum( arr, n, index, s );
}

int main()
{
    int arr[ 10 ] = { 1, 2, 3, 4, 5 };

    cout << sum( arr, 5, 0, 0 );

    return 0;
}
