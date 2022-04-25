#include<bits/stdc++.h>

using std::cin;
using std::cout;
using std::string;

int main()
{
    int rows;

    cout << "Enter no. of rows : ";
    cin >> rows;

    for( int i = 0 ; i < rows ; i++ )
        cout << string( i, ' ' ) << string( rows-i, '*' ) << '\n';

    return 0;
}
