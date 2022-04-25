// PROGRAM TO ILLUSTRATE LINEAR SEARCH

#include<iostream>
using namespace std;


int linear_search( int* arr, int n, int element )
{
    for( int i = 0 ; i < n ; i++ )
    {
        if( arr[ i ] == element )
            return i;
    }

    return -1;
}

int main()
{
    int *arr, n, element, index, i ;

    cout << "\nNo. of elements : ";
    cin >> n;

    cout << "\nEnter Array Elements :\n";
    arr = new int( n );
    for( i = 0 ; i < n ; cin >> arr[ i++ ] );

    cout << "\nEnter Element to be Searched : ";
    cin >> element;

    index = linear_search( arr, n, element );

    if( index > -1 )
        cout << "\n\nElement Found At Index : " << index;
    else
        cout << "\n\nElement Not Found...";

    delete arr;
    return 0;
}



