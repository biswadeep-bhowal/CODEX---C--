// PROGRAM TO ILLUSTRATE THE SIZE(), RESIZE(), MAX_SIZE(), CAPACITY, SHRINK_TO_FIT() AND RESERVE() VECTOR FUNCTIONS.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector< int > v = { 1, 2, 3, 4, 5 };

    cout << "\nReserving extra space in the vector...";
    v.reserve( 100 );
    cout << "\nCapacity of Vector : " << v.capacity();  // DISPLAYS CAPACITY. REFLECTS THE RESERVED VALUE.

    cout << "\nSize of Vector : " << v.size();    // DISPLAYS THE NO. OF ELEMENTS IN THE VECTOR.

    v.resize( 10 ); // Resizes the vector, so it can now hold 10 elements;

    cout << "\nMaximum Size of Vector : " << v.max_size();  // displays maximum size of vector.


    cout << "\nShrinking Vector...";
    v.shrink_to_fit();

    cout << ( v.empty() ? "\nEmpty Vector..." : "\nVector is not empty!" ); // CHECKS WHETHER THE VECTOR IS EMPTY.

    cout << "\n\nVector : ";
    for( auto x : v )
        cout << x << ' ';

    return 0;
}
