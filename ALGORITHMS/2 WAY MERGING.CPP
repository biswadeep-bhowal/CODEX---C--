// PROGRAM TO ILLUSTRATE 2 -WAY MERGING

#include<bits/stdc++.h>
using namespace std;

vector< int > twowaymerge( vector< int > A, vector< int > B )
{
    vector< int > C( A.size() + B.size(), 0 );
    int i, j, k;

    for( i = j = k = 0 ; i < A.size() && j < B.size() ; k++ )
    {
        if( A[ i ] <= B[ j ] )
            C[ k ] = A[ i++ ];
        else
            C[ k ] = B[ j++ ];
    }

    while( i < A.size() )
        C[ k++ ] = A[ i++ ];
    while( j < B.size() )
        C[ k++ ] = B[ j++ ];

    return C;
}

int main()
{
    vector< int > A, B, C;
    int i, j, k;

    cout << "\nSize of A : ";
    cin >> k;

    cout << "\nEnter Array Elements :\n";
    for( i = 0 ; i < k ; i++ )
    {
        cin >> j;
        A.push_back( j );
    }

    cout << "\nSize of B : ";
    cin >> k;

    cout << "\nEnter Array Elements :\n";
    for( i = 0 ; i < k ; i++ )
    {
        cin >> j;
        B.push_back( j );
    }

    sort( A.begin(), A.end() );
    sort( B.begin(), B.end() );
    C = twowaymerge( A, B );

    cout << "\nMerged Array : ";
    for( auto x : C )
        cout << x << ' ';

    return 0;
}
