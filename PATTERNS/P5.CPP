#include<bits/stdc++.h>

using std::cin;
using std::cout;
using std::string;

int main()
{
    int rows;

    cout << "Enter no. of rows : ";
    cin >> rows;

    cout << string( rows, '*' ) + '\n';
    for( int i = 0 ; i < rows ; i++ )
        cout << '*' + string( rows-2, ' ' ) + "*\n";
    cout << string( rows, '*' );

    return 0;
}
