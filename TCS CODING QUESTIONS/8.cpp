/*Problem Statement-:

Identify the logic behind the series

6 28 66 120 190 276�.

The numbers in the series should be used to create a Pyramid. The base of the Pyramid will be the widest and will start converging towards the top where there will only be one element. Each successive layer will have one number less than that on the layer below it. The width of the Pyramid is specified by an input parameter N. In other words there will be N numbers on the bottom layer of the pyramid.

The Pyramid construction rules are as follows

First number in the series should be at the top of the Pyramid
Last N number of the series should be on the bottom-most layer of the Pyramid, with Nthnumber being the right-most number of this layer.
Numbers less than 5-digits must be padded with zeroes to maintain the sanctity of a Pyramid when printed. Have a look at the examples below to get a pictorial understanding of what this rule actually means.
Example

If input is 2, output will be

00006
00028 00066
If input is 3, output will be

00006
00028 00066
00120 00190 00276
Formal input and output specifications are stated below

Input Format:

First line of input will contain number N that corresponds to the width of the bottom-most layer of the Pyramid
Output Format:

The Pyramid constructed out of numbers in the series as per stated construction rules
Constraints:

0 < N <= 14*/

#include<bits/stdc++.h>
#include<string>
using namespace std;

void getTerms( vector< int >& terms, int n )
{
    for( int x = 2, y = 3, i = 0 ; i < n ; i++, x += 2, y += 4 )
        terms[ i ] = x*y;
}

void printPattern( vector< int >& terms, int n )
{
    int term;
    int i, j, k;

    for( k = i = 0 ; k < n ; i++, cout << '\n' )
    {
        for( j = 0 ; j <= i && k < n ; j++ )
        {
            term = terms[ k++ ];
            printf( "%.5d ", term );
        }

    }
}

int main()
{
    vector< int > terms( 15, 0 );
    int n;

    cin >> n;
    getTerms( terms, n );
    printPattern( terms, n );

    return 0;
}














