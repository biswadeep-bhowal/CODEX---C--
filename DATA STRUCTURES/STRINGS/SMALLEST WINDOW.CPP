// PROGRAM TO FIND SMALLEST WINDOW IN A STRING CONTAINING CHARACTERS OF ANOTHER GIVEN STRING.

#include<iostream>
#include<string.h>

using namespace std;

string Smallest_Window( string haystack, string needle )
{
    string window, smallest_window;
    int window_size;
    int i, j, k;

    for( window_size = needle.length() ; window_size <= haystack.length() ; window_size++ )
    {
        for( i = 0 ; i < haystack.length() - needle.length() ; i++ )
        {
            window = haystack.substr( i, i + window_size - 1 );
            for( k = j = 0 ; j < window.length() ; j++ )
            {
                if( window[ j ] == needle[ k ] )
                {
                    if( k == needle.length() - 1 )
                        return window;
                    k++;
                    j = 0;
                }
            }
        }
    }

    return "N/A";
}

int main()
{
    string needle, haystack, ans;

    fflush( stdin );
    cout << "\nEnter main string : ";
    getline( cin, haystack );

    fflush( stdin );
    cout << "\nEnter window string : ";
    getline( cin, needle );

    ans = Smallest_Window( haystack, needle );
    if( ans != "N/A" )  cout << "\nSmallest Window : " << ans;
    else                cout << "\nNo Window Found...";

    return 0;
}

