// PROGRAM TO ILLUSTRATE THE SETW MANIPULATOR

#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main()
{
    int n, i, j;
    string str;

    cout << "Enter no. of rows ( 1 - 9 ) : ";
    cin >> n;

    for( i = 1 ; i <= n ; i++ )
    {
        for( str = "", j = 1 ; j <= i ; j++, str += to_string( i ) );
        cout << setw( n ) << str << endl;
    }

    cout << endl << "The SETW manipulator sets the width of the field assigned for the output.\nThe field width determines the minimum number of characters to be written in some output representations.\nIf the standard width of the representation is shorter than the field width, the representation is padded with fill characters (using setfill)." << endl;

    return 0;
}
