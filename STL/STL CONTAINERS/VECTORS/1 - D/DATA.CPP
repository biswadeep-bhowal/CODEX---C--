// PROGRAM TO ILLUSTRATE THE DATA FUNCTION IN VECTOR

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector< int > v = { 1, 2, 3, 4, 5 };

    cout << "\nVector : ";
    for( auto x : v )
        cout << x << ' ';

    int *arr = v.data();    // RETURNS POINTER TO FIRST ELEMENT OF THE ARRAY INSIDE THE VECTOR CLASS.

    cout << "\n\nExtracted Array : ";
    for( int i = 0 ; i < v.size() ; cout << arr[ i++ ] << ' ' );

    return 0;
}
