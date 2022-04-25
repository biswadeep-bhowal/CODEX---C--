#include<iostream>

using namespace std;

char max_occurrence( string str )
{
    int Count, Max;
    int i, j;
    char ch, temp;

    Max = 0;
    ch = ' ';

    while( str.length() )
    {
        Count = 0;
        temp = str[ 0 ];

        for( j = 0 ; j < str.length() ; j++ )
        {
            if( str[ j ] == temp )
            {
                Count++;
                str.erase( str.begin() + j );
            }
        }

        if( Max < Count )
        {
            Max = Count;
            ch = temp;
        }

        //cout << "\nStatus : " << str;
    }

    return ch;
}

int main()
{
    string str;
    char ch;

    fflush( stdin );

    cout << "\nEnter a string : ";
    getline( cin, str );

    ch = max_occurrence( str );
    cout << "\nMax Occuurring Character : " << ch;

    return 0;
}
