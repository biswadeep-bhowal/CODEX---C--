// PROGRAM TO ILLUSTRATE QUICKSORT

#include<iostream>
using namespace std;

void Swap( int* a, int* b )
{
    int c = *a;
    *a = *b;
    *b = c;
}

int Partition( int* arr, int left, int right )
{
    int pivot, i, j;

    pivot = arr[ left ];

    for( i = left - 1, j = left ; j <= right - 1 ; j++ )
    {
        if( arr[ j ] < pivot )
        {
            i++;
            Swap( &arr[ j ], &arr[ i ] );
        }
    }

    Swap( &arr[ i+1 ], &arr[ right ] );
    return ( i+1 );
}

void Quicksort( int* arr, int left, int right )
{
    if( left >= right )
        return;

    int pi = Partition( arr, left, right );
    Quicksort( arr, left, pi );
    Quicksort( arr, pi+1, right );
}

int main()
{
    int n, i, choice;

    cout << "\nEnter Size of Array : ";
    cin >> n;

    int arr[ n ];

    cout << "\nEnter Array Elements :\n";
    for( i = 0 ; i < n ; cin >> arr[ i++ ] );

    cout << "\nGiven Array : ";
    for( i = 0 ; i < n ; cout << arr[ i++ ] << ' ' );

    Quicksort( arr, 0, n-1 );

    cout << "\nSorted Array : ";
    for( i = 0 ; i < n ; cout << arr[ i++ ] << ' ' );

    return 0;
}
