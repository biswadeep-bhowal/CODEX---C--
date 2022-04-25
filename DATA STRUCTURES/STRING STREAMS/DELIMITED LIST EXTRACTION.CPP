// PROGRAM TO EXTRACT INTEGERS FROM DELIMITED STRING INTO A VECTOR

#include<bits/stdc++.h>

using namespace std;

vector< int > extract( string s )
{
    vector< int > v;
    int n;

    for( ; s[ s.length() - 1 ] == ' ' ; s.erase( s.length() - 1, 1 ) ); // REMOVING ANY WHITESPACES AT THE END

    for( stringstream ss( s ) ; !ss.eof() ; ss.ignore() )  // NOTE THAT THERE SHOULD NOT BE ANY DISCREPANCY IN INPUT FORMAT.
    {
        ss >> n;
        v.push_back( n );
    }

    return v;
}

int main()
{
    vector< int > v;
    string str;

    cout << "Enter Delimited String : ";
    getline( cin, str );

    v = extract( str );

    cout << "\nGiven Vector : ";
    for( auto i : v )cout << i << " ";

    return 0;
}
