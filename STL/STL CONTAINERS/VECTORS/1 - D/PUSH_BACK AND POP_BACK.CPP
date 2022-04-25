// PROGRAM TO ILLUSTRATE push_back() and pop_back() MAMBER FUNCTIONS IN THE VECTOR CLASS

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector< int > v = { 1, 2, 3, 4, 5 };

    cout << "\nVector : ";
    for( auto x : v )cout << x << " ";

    v.push_back( 6 );   // INSERTS 6 AT THE END

    cout << "\nVector : ";
    for( auto x : v )cout << x << " ";

    v.pop_back();   // DELETES THE LAST ELEMENT : 6

    cout << "\nVector : ";
    for( auto x : v )cout << x << " ";

    cout << "\n\n\nTHESE FUNCTIONS ARE STACK OPERATIONS ON THE VECTOR." << endl;

    return 0;
}
