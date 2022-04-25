//PROGRAM TO ILLUSTRATE 2D VECTOR

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int r, c, i, j;

    cout << "Rows : ";
    cin >> r;
    cout << "Columns : ";
    cin >> c;

    vector < vector< int > >  v( r, vector < int >( c ) );  // DECLARATION AND ALLOCATION

    cout << "\nEnter the vector elements :" << endl;
    for( i = 0 ; i < r ; i++ )for( j = 0 ; j < c ; cin >> v[ i ][ j++ ] );

    cout << "\nGiven 2D Vector : " << endl;
    for( auto x : v )
    {
        for( auto y : x )
            cout << y << " ";
        cout << endl;
    }

    return 0;
}
