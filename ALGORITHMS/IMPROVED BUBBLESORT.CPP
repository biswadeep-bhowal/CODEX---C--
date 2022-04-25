// PROGRAM TO ILLUSTRATE IMPROVED BUBBLESORT

#include<iostream>
using namespace std;

void bubblesort( int* arr, int n )
{
    int i, j, k;
    int flag;

    for( flag = 1, i = 0 ; i < n ; i++ )
    {
        for( flag = 0, j = 0 ; j < n - i - 1 ; j++ )
        {
            if( arr[ j ] > arr[ j+1 ] )
            {
                k = arr[ j ];
                arr[ j ] = arr[ j+1 ];
                arr[ j+1 ] = k;

                flag = 1;
            }
        }

        if( flag == 0 )
            break;
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

