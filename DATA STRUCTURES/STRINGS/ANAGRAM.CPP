// PROGRAM TO FIND IF GIVEN STRINGS ARE ANAGRAMS OF EACH OTHER

#include<bits/stdc++.h>

using namespace std;

bool isAnagram( string A, string B )
{
    vector< int > alphabet( 26, 0 );

    if( A.length() != B.length() )
        return false;

    for( int i = 0 ; i < A.length() ; i++ )
    {
        alphabet[ int( A[ i ] ) - 97 ]++;
        alphabet[ int( B[ i ] ) - 97 ]--;
    }

    return alphabet == vector< int >( 26, 0 );
}

int main()
{
    string a, b;

    cout << "\nEnter first string : ";
    getline( cin, a );
    cout << "\nEnter second string : ";
    getline( cin, b );

    if( isAnagram( a, b ) ) cout << "\nAnagrams!" << endl;
    else                    cout << "\nNot Anagrams..." << endl;

    return 0;
}
