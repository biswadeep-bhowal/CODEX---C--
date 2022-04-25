// PROGRAM TO ILLUSTRATE INSERTION SORT

#include<iostream>
using namespace std;

void insertion_sort( int* arr, int n )
{
    int i, j, k;

    for( i = 1 ; i < n ; i++ )
    {
        k = arr[ i ];

        for( j = i-1 ; j >= 0 && arr[ j ] > k ; j-- )
            arr[ j+1 ] = arr[ j ];

        arr[ j+1 ] = k;
    }
}

int main()
{
    int *arr, n;

    cout << "\nNo. of elements : ";
    cin >> n;

    cout << "\nEnter array elements :\n";
    arr = new int( n );
    for( int i = 0 ; i < n ; cin >> arr[ i++ ] );

    cout << "\nGiven Array : ";
    for( int i = 0 ; i < n ; cout << arr[ i++ ] << ' ' );

    insertion_sort( arr, n );

    cout << "\nSorted Array : ";
    for( int i = 0 ; i < n ; cout << arr[ i++ ] << ' ' );

    delete arr;
    return 0;
}
