#include<iostream>
using namespace std;

int main()
{
    int rows, spaces, mod, i, j;

    cout << "Enter no. of rows : ";
    cin >> rows;

    if( rows == 1 )         cout << "***\n* *\n***";
    else if( rows == 2 )    cout << "***\n* *\n* *\n***";
    else
    {
        for( i = 0 ; i < ( rows-1 )/2 ; i++, cout << '\n' )
        {
            for( j = ( rows/2 ) - i - 1 ; j > 1 ; j-- )
                cout << '*';
            for( spaces = 2*i + 1 ; spaces > 0 ; spaces-- )
                cout << 'S';
            for( j = ( rows/2 ) - i - 1 ; j > 1 ; j-- )
                cout << '*';
        }

        mod = rows%2;

        for( i -= mod ; i > 0 ; i--, cout << '\n' )
        {
            for( j = ( rows/2 ) - i ; j > 1 ; j-- )
                cout << '*';
            for( spaces = 2*i - 1; spaces > 0 ; spaces-- )
                cout << 'S';
            for( j = ( rows/2 ) - i ; j > 1 ; j-- )
                cout << '*';
        }
    }

    return 0;
}
