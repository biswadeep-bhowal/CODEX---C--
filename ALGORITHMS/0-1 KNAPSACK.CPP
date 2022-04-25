// PROGRAM TO SOLVE 0-1 KNAPSACK PROBLEM USING DYNAMIC PROGRAMMING

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int Knapsack( vector< pair< int, int > > data, int W, int N )
{
    int dp[ N + 1 ][ W + 1 ];
    int n, w;

    for( n = 0 ; n < N+1 ; n++ )
    {
        for( w = 0 ; w < W+1 ; w++ )
        {
            if( n == 0 || w == 0 )
                dp[ n ][ w ] = 0;

            else if( data[ n-1 ].second <= w )
                dp[ n ][ w ] = max( dp[ n-1 ][ w ], data[ n-1 ].first + dp[ n-1 ][ w-data[ n-1 ].second ] );

            else
                dp[ n ][ w ] = dp[ n-1 ][ w ];
        }
    }

    return dp[ N ][ W ];
}

int main()
{
    int N = 3;
    int W = 6;

    vector< pair< int, int > > data{ { 10, 1 }, { 15, 2 }, { 40, 3 } };

    cout << Knapsack( data, W, N );

    return 0;
}

















