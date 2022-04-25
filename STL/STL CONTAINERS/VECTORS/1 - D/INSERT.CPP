// PROGRAM TO ILLUSTRATE THE INSERT FUNCTION

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector< int > v = { 1, 2, 3, 4, 5 };

    cout << "\nVector : ";
    for( int x : v )
        cout << x << " ";

    cout << "\n\nInserting 0 at index 0..." << endl;
    v.insert( v.begin() + 0, 0 );

    cout << "\nVector : ";
    for( int x : v )
        cout << x << " ";

    cout << "\n\nInserting 6 at index 6..." << endl;
    v.insert( v.begin() + 6, 6 );

    cout << "\nVector : ";
    for( int x : v )
        cout << x << " ";

    return 0;
}
