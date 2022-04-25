// PROGRAM TO ILLUSTRATE HEAP SORT

#include<bits/stdc++.h>
using namespace std;

void max_heapify( int v[], int n, int index )
{
    int left, right, largest;

    left = 2 * index + 1;
    right = left + 1;
    largest = index;

    if( left < n && v[ left ] > v[ largest ] )         largest = left;
    if( right < n and v[ right ] > v[ largest ] )      largest = right;

    if( largest != index )
    {
        swap( v[ index ], v[ largest ] );
        max_heapify( v, n, largest );
    }
}

void build_max_heap( int v[], int n )
{
    for( int i = ( n-1 )/2 ; i >= 0 ; i-- )
        max_heapify( v, n, i );
}

void heapsort( int v[], int n )
{
    build_max_heap( v, n );

    for( int i = n - 1 ; i >= 0 ; i-- )
    {
        swap( v[ 0 ], v[ i ] );

        max_heapify( v, i, 0 );
    }
}

int main()
{
    int n, element;

    cout << "Size of Array : ";
    cin >> n;

    int v[ n ];

    cout << "\nEnter Array Elements :\n";
    for( int i = 0 ; i < n ; cin >> v[ i++ ] );

    cout << "\nGiven Array :\t";
    for( auto x : v )cout << x << '\t';

    heapsort( v, n );

    cout << "\nSorted Vector : ";
    for( auto x : v )cout << x << "\t";

    return 0;
}
