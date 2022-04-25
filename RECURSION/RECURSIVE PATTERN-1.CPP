//PROGRAM TO GENERATE PATTERN P1 RECURSIVELY

#include<iostream>
using namespace std;

void display( int i, int rows )
{
    if( i == rows )
        return;

    cout << string( i+1, '*' ) + '\n';
    display( i+1, rows );
}

int main()
{
    int rows;

    cout << "\nEnter no. of rows : ";
    cin >> rows;

    display( 0, rows );

    return 0;
}
