//PROGRAM TO ILLUSTRATE BINARY SEARCH

#include<iostream>
using namespace std;

int binary_search( int *arr, int n, int element )
{
    int beg, mid, last;

    beg = 0;
    mid = 0;
    last = n-1;

    while( beg <= last )
    {
        mid = ( beg + last )/ 2;

        if( arr[ mid ] == element )
            return mid;
        else if( element < arr[ mid ] )
            last = mid - 1;
        else
            beg = mid + 1;
    }

    return -1;
}

int main()
{
    int *arr, n, element, index, i;

    cout << "No. of Elements : ";
    cin >> n;

    arr = new int( n );
    cout << "\nEnter array elements :\n";
    for( i = 0 ; i < n ; cin >> arr[ i++ ] );

    cout << "\nEnter element to be Searched : ";
    cin >> element;

    index = binary_search( arr, n, element );

    if( index > -1 )
        cout << "\n\nElement Found At Index : " << index;
    else
        cout << "Element Not Found...";

    delete arr;
    return 0;
}
