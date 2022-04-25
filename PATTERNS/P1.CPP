#include<iostream>
using namespace std;

int main()
{
    int rows;

    cout << "Enter no. of rows : ";
    cin >> rows;

    for( int i = 0 ; i < rows ; i++ )
    {
        cout << string( i+1, '*' ) << '\n';
    }

    return 0;
}
