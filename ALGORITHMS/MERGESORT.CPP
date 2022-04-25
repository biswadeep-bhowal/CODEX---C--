// PROGRAM TO ILLUSTRATE mergeSort

#include<iostream>
using namespace std;

void Merge( int* arr, int left, int mid, int right )
{
    int l, r;
    int i, j, k;

    l = mid - left + 1;
    r = right - mid;

    int L[ l ];
    int R[ r ];

    for( i = 0 ; i < l ; i++ )
        L[ i ] = arr[ left + i ];
    for( j = 0 ; j < r ; j++ )
        R[ j ] = arr[ mid + 1 + j ];

    k = left;
    i = j = 0;

    while( i < l && j < r )
    {
        if( L[ i ] <= R[ j ] )
        {
            arr[ k ] = L[ i ];
            k++;
            i++;
        }
        else
        {
            arr[ k ] = R[ j ];
            k++;
            j++;
        }
    }

    while( i < l )
    {
        arr[ k ] = L[ i ];
        k++;
        i++;
    }
    while( j < r )
    {
        arr[ k ] = R[ j ];
        k++;
        j++;
    }

}

void Mergesort( int* arr, int left, int right )
{
    if( left >= right )
        return;

    int mid = left + (right - left )/2;

    Mergesort( arr, left, mid );
    Mergesort( arr, mid+1, right );
    Merge( arr, left, mid, right );
}

int main()
{
    int n, i;

    cout << "\nEnter Size of Array : ";
    cin >> n;

    int arr[ n ];

    cout << "\nEnter Array Elements :\n";
    for( i = 0 ; i < n ; cin >> arr[ i++ ] );

    cout << "Given Array : ";
    for( i = 0 ; i < n ; cout << arr[ i++ ] << ' ' );

    Mergesort( arr, 0, n-1 );

    cout << "\nSorted Array : ";
    for( i = 0 ; i < n ; cout << arr[ i++ ] << ' ' );

    return 0;
}
