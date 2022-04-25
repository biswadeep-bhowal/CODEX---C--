/*
Compute the nearest larger number by interchanging its digits updated.Given 2 numbers a and b find the smallest number greater than b by interchanging the digits of a and if not possible print -1.

Input Format
2 numbers a and b, separated by space.
Output Format
A single number greater than b.
If not possible, print -1

Constraints
1 <= a,b <= 10000000

Example 1:

Sample Input:

    459 500

Sample Output:
    549

Example 2:

Sample Input:

    645757 457765

Sample Output:
    465577
*/

#include<bits/stdc++.h>
using namespace std;

int findNum( string& a, int left, int right, int b )
{
    static int c = -1;
    int m = stoi( a );

    if( left == right )
    {
        if( m > b && ( c == -1 || m < c ) )
            c = m;
    }
    else
    {
        for( int i = left ; i <= right ; i++ )
        {
            swap( a[ left ], a[ i ] );
            findNum( a, left+1, right, b );
            swap( a[ left ], a[ i ] );
        }
    }

    return c;
}

int main()
{
    string A;
    int a, b;

    cin >> a >> b;
    A = to_string( a );

    cout << findNum( A, 0, A.size() - 1, b );

    return 0;
}

















