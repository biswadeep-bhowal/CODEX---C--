// PROGRAM TO ILLUSTRATE SETFILL MANIPULATOR

#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main()
{
    string str;
    int n, i, j;

    cout << "Enter no. of rows ( 1 - 9 ): ";
    cin >> n;

    for( i = 1 ; i <= n ; i++ )
    {
        for( str = "", j = 1 ; j <= i ; j++, str += to_string( i ) );
        cout << setfill( '-' ) << setw( n ) << str << endl;
    }

    cout << endl << "The setfill character is used in output insertion operations to fill spaces when results have to be padded to the field width." << endl;

    return 0;
}
