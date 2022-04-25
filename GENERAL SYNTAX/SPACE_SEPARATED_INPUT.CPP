// PROGRAM TO TAKE SPACE SEPARATED INPUT INTO AN ARRAY WHEN NO. OF ELEMENTS IS KNOWN.

#include<iostream>

using namespace std;

int main()
{
    int i, n, arr[ 5 ];

    for( i = 0 ; i < 5 ; cin >> arr[ i++ ] );
    for( i = 0 ; i < 5 ; cout << arr[ i++ ] << " " );

    return 0;
}
