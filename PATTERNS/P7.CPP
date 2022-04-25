#include<iostream>
using namespace std;

int main()
{
    int rows, i, j, spaces, mod;

    cout << "Enter no. of rows : ";
    cin >> rows;

    if( rows == 1 )         cout << '*';
    else if( rows == 2 )    cout << "*\n*";
    else
    {
        for( i = 0 ; i <= ( rows-1 )/2 ; i++, cout << '\n' )
        {
            for( spaces = rows/2 - i ; spaces > 0 ; spaces-- )
                cout << ' ';
            for( j = 2*i + 1 ; j > 0 ; j-- )
                cout << '*';
        }

        mod = rows%2;

        for( i -= ( mod + 1 ); i >= 0 ; i--, cout << '\n' )
        {
            for( spaces = ( rows/2 ) - i ; spaces > 0 ; spaces-- )
                cout << ' ';
            for( j = 2*i + 1 ; j > 0 ; j-- )
                cout << '*';
        }
    }
    return 0;
}
