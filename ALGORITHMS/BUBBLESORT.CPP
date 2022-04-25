// PROGRAM TO ILLUSTRATE BUBBLE SORT

#include<iostream>
using namespace std;

void bubblesort( int* arr, int n )
{
    int i, j, k;

    for( i = 0 ; i < n ; i++ )
    {
        for( j = 0 ; j < n - i - 1 ; j++ )
        {
            if( arr[ j ] > arr[ j+1 ] )
            {
                k = arr[ j ];
                arr[ j ] = arr[ j+1 ];
                arr[ j+1 ] = k;
            }
        }
    }
}

int main()
{
    int* arr;
    int n, element, i;

    cout << "\nEnter number of elements : ";
    cin >> n;

    cout << "\nEnter the array elements :\n";
    arr = ( int* )malloc( n*sizeof( int ) );
    for( i = 0 ; i < n ; cin >> arr[ i++ ] );

    cout << "\nGiven Array : ";
    for( i = 0 ; i < n ; cout << arr[ i++ ] << ' ' );

    bubblesort( arr, n );

    cout << "\nSorted Array : ";
    for( i = 0 ; i < n ; cout << arr[ i++ ] << ' ' );

    delete arr;
    return 0;
}
