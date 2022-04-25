/*
Q3. Write a program to print all the combinations of the given word with or without meaning (when unique characters are given).



Sample Input:

abc



Output:

abc

acb

bac

bca

cba

cab
*/




#include<iostream>
using namespace std;

void permute( string& s, int left, int right )
{
    if( left == right )
        cout << s << '\n';

    else
    {
        for( int i = left ; i <= right ; i++ )
        {
            swap( s[ left ], s[ i ] );
            permute( s, left+1, right );
            swap( s[ left ], s[ i ] );
        }
    }
}

int main()
{
    string s;

    cout << "\nEnter a String : ";
    getline( cin, s );

    permute( s, 0, s.size() - 1 );

    return 0;
}
