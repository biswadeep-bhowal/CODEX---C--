// PROGRAM TO ILLUSTRATE CLEAR() AND ERASE() FUNCTIONS

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector< int > v = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    for( auto x : v )
        cout << x << " ";

    cout << "\n\nErasing 5th element..." << endl;
    v.erase( v.begin() + 4 );   // 4 is the desired index to be deleted. 5 was at index 4.

    cout << "\nVector : ";
    for( auto x : v )
        cout << x << " ";

    cout << "\n\nErasing 3rd to 5th element..." << endl;
    v.erase( v.begin() + 2, v.begin() + 5 );    // Index 5 is not deleted.

    cout << "\nVector : ";
    for( auto x : v )
        cout << x << " ";

    cout << "\n\nClearing Vector..." << endl;
    v.clear();

    cout << "\nVector : ";
    for( auto x : v )
        cout << x << " ";

    return 0;
}
