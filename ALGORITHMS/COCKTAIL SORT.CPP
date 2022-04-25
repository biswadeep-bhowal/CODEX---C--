// PROGRAM TO ILLUSTRATE COCKTAIL SORT

#include<bits/stdc++.h>
using namespace std;

void display( int* arr, int n ){    for( int i = 0 ; i < n ; cout << arr[ i++ ] << ' ' );  }
void cocktail_sort( int* arr, int n )
{
    int left, right;
    int j;
    bool swapped;

    left = 0;
    right = n-1;

    do
    {
        swapped = false;

        for( j = left ; j < right ; j++ )
        {
            if( arr[ j ] > arr[ j+1 ] )
            {
                swap( arr[ j ], arr[ j+1 ] );
                swapped = true;
            }
        }
        display( arr, n );
        if( swapped != true )
            break;

        swapped = false;
        --right;

        for( j = right - 1 ; j >= left ; j-- )
        {
            if( arr[ j ] > arr[ j+1 ] )
            {
                swap( arr[ j ], arr[ j+1 ] );
                swapped = true;
            }
        }
        display( arr, n );
        left++;
    }while( swapped );
}

int main()
{
    int *arr, n;

    cout << "\nEnter size of Array : ";
    cin >> n;

    cout << "\nEnter Array Elements :\n";
    arr = new int( n );
    for( int i = 0 ; i < n ; cin >> arr[ i++ ] );

    cout << "\nGiven Array : ";
    for( int i = 0 ; i < n ; cout << arr[ i++ ] << ' ' );

    cocktail_sort( arr, n );

    cout << "\nSorted Array : ";
    for( int i = 0 ; i < n ; cout << arr[ i++ ] << ' ' );
}
