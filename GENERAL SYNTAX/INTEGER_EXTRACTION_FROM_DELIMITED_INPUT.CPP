// PROGRAM TO EXTRACT SINGLE - CHARACTER - DELIMITED LIST OF INTEGERS WITHOUT STRINGSTREAM

#include<bits/stdc++.h>

using namespace std;

vector< int > extract()
{
    vector< int > v;
    int n;

    for( char ch ; ch != '\n' ; v.push_back( n ) )
        scanf( "%d%c" , &n, &ch );
        
    return v;
}

int main()
{
    vector< int > v;

    cout << "\nEnter Delimited List : ";
    v = extract();

    cout << "\nVector : ";
    for( auto x : v )cout << x << " ";

    return 0;
}
