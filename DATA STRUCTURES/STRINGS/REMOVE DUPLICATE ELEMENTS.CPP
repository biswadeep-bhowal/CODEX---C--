// PROGRAM TO REMOVE DUPLICATE CHARACTERS IN A STRING

#include<iostream>
#include<string>

using namespace std;

string Remove_Duplicates( string str )
{
    for( int i = 0 ; i < str.length() ; i++ )
    {
        for( int j = i + 1 ; j < str.length() ; j++ )
        {
            while( str[ i ] == str[ j ] )
                str.erase( str.begin() + j );
        }
    }

    return str;
}

int main()
{
    string str;
    cout << "\nEnter a String : ";
    getline( cin, str );
    cout << "\nDuplicates Removes : " << Remove_Duplicates( str );

    return 0;
}
