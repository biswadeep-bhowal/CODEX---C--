#include<iostream>
using namespace std;

int main()
{
    int rows;

    cout << "Enter no. of rows : ";
    cin >> rows;

    for( int i = 0 ; i < rows ; i++, cout << '\n' )
    {
        for( int spaces = rows - i - 1 ; spaces > 0 ; spaces-- )
            cout << ' ';
        for( int j = 0 ; j < 2*i + 1 ; j++ )
            cout << '*';
    }
    return 0;
}
