// PROGRAM TO PRINT AN ARRAY USING RECURSION

#include<iostream>
using namespace std;

void display( int* arr, int n, int index )
{
    if( index == n ) // TERMINATING CASE
        return;

    cout << arr[ index ] << ' ';
    display( arr, n, index+1 );

}

void Display( int* arr, int n )
{
    if( n == 0 )
        return;

    else
    {
        cout << *arr << ' ';
        arr++;
        Display( arr, n-1 );
    }
}
int main()
{
    int arr[ 10 ] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    Display( arr, 10 );
    //display( arr, 10, 0 );

    return 0;
}
