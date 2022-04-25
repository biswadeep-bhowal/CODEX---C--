#include<iostream>

using namespace std;

bool ispalindrome( string str )
{
    for( int i = 0 ; i < str.length() / 2 ; i++ )
    {
        if( str[ i ] != str[ str.length() - i - 1 ] )
            return false;
    }
    return true;
}

int main()
{
    string str;

    cout << "\nEnter a string : ";
    getline( cin, str );

    if( ispalindrome( str ) )   cout << "\nPalindrome!";
    else                        cout << "\nNot a palindrome...";

    return 0;
}
