// PROGRAM TO ILLUSTRATE THE FRONT AND BACK FUNCTIONS OF A VECTOR

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector< int > v = { 1, 2, 3, 4, 5 };

    cout << "\nFirst Element : " << v.front();
    cout << "\nLast Element : " << v.back();

    cout << "\nVector : ";
    for( auto x : v )
        cout << x << ' ';

    return 0;
}
