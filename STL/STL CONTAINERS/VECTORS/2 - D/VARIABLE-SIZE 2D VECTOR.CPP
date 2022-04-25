#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int r, c, i, j, n;

    cout << "Rows : ";
    cin >> r;

    vector< vector< int > > v( r ); // SINCE COLUMNS ARE VARIABLE, ONLY ROW ARGUMENT PASSED.

    for( i = 0 ; i < r ; i++ )
    {
        cout << "\nEnter Row - " << i+1 << " elements : ( Enter -1 to exit row )" << endl;
        cin >> n;
        while( n != -1 )
        {
            v[ i ].push_back( n );
            cin >> n;
        }
    }

    cout << "\nGiven Vector : " << endl;

    for( i = 0 ; i < r ; i++, cout << endl )for( j = 0 ; j < v[ i ].size() ; cout << v[ i ][ j++ ] << ", " );
    return 0;
}
