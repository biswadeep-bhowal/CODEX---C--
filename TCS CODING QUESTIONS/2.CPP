/*Q2. There is a range given n and m in which we have to find the count of all the prime pairs whose difference is 6. We have to find how many sets are there within a given range.



Output:

The output consists of a single line, print the count prime pairs in a given range. Else print"No Prime Pairs".



Constraints:

2<=n<=1000

n<=m<=2000



Sample Input:

4

30



Output:

6*/

#include<bits/stdc++.h>
using namespace std;

bool isPrime( int n )
{
    if( n <= 1 )
        return false;
    if( n == 2 || n == 3 )
        return true;
    if( n%2 == 0 || n%3 == 0 )
        return false;

    for( int i = 5 ; i*i <= n ; i += 6 )
    {
        if( n%i == 0 || n%( i+2 ) == 0 )
            return false;
    }

    return true;
}

int countPairs( int lower, int upper )
{
    vector< int > nums;
    int p1, p2, diff, pairCount;
    int i, j;

    for( i = lower ; i <= upper ; i++ )
    {
        if( isPrime( i ) )
            nums.push_back( i );
    }

    if( nums.size() == 1 )
        return 0;


    for( pairCount = 0, i = j = 0 ; i < nums.size() && j < nums.size() ; )
    {
        diff = nums[ j ] - nums[ i ];

        if( diff == 6 )
        {
            pairCount++;

            ++i;
            j = i+1;
        }
        else if( diff < 6 )
        {
            ++j;
        }
        else if( diff > 6 )
        {
            ++i;
            j = i+1;
        }
    }

    return pairCount;
}

int main()
{
    int lower, upper, pairCount;

    cin >> lower >> upper;

    pairCount = countPairs( lower, upper );

    if( pairCount > 0 )
        cout << pairCount;
    else
        cout << "No Prime Pairs";

    return 0;
}








