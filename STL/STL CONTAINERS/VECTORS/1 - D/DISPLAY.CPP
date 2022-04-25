// PROGRAM TO ILLUSTRATE 3 WAYS TO DISPLAY A 1 - D VECTOR

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector< int > v = { 1, 2, 3, 4, 5 };

    for( auto x : v )
        cout << x << " ";

    cout << endl;

    for( auto iterator = v.begin() ; iterator != v.end() ; iterator++ )
        cout << *iterator << " ";

    cout << endl;

    for( int i = 0 ; i < v.size() ; i++ )
        cout << v[ i ] << " ";

    return 0;
}
