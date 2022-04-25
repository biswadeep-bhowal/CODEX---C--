// PROGRAM TO ILLUSTRATE MATHEMATICAL SET OPERATIONS

#include<iostream>
#include<algorithm>
#include<set>

using namespace std;

set< int > Delimited_input()
{
    set< int > s;
    int n;
    char ch;

    while( ch != '\n' )
    {
        scanf( "%d%c", &n, &ch );
        s.insert( n );
    }

    return s;
}

void Display( set< int > s )
{
    if( s.size() == 0 ) cout << "Empty";
    else
    {
        for( auto x : s )
            cout << x << " ";
    }
}

void clrscr( int n ){   while( n-- &&  cout << '\n' );    }
int main()
{
    set< int > s1, s2, s3;
    int n, choice;
    char ch;

    do
    {
        clrscr( 30 );

        cout << "\t\tMENU" << endl;

        cout << "1) Union" << endl;
        cout << "2) Intersection" << endl;
        cout << "3) Symmetric Difference" << endl;

        cout << "\nEnter your choice : ";
        cin >> choice;

        cout << "Delimited Input for s1 : ";
        s1 = Delimited_input();
        cout << "Delimited Input for s2 : ";
        s2 = Delimited_input();

        switch( choice )
        {
            case 1 : set_union( s1.begin(), s1.end(), s2.begin(), s2.end(), inserter( s3, s3.begin()) );                   break;
            case 2 : set_intersection( s1.begin(), s1.end(), s2.begin(), s2.end(), inserter( s3, s3.begin()) );            break;
            case 3 : set_symmetric_difference( s1.begin(), s1.end(), s2.begin(), s2.end(), inserter( s3, s3.begin()) );    break;

            default : cout << "\nINVALID INPUT..." << endl;
        }

        cout << "\nS1 : ";
        Display( s1 );
        cout << "\nS2 : ";
        Display( s2 );
        cout << "\nS3 : ";
        Display( s3 );

        s1 = s2 = s3 = {};

        cout << "\n\nCONTINUE ? ( Y / N ) : ";
        fflush( stdin );
        cin >> ch;
    }while( ch == 'y' || ch == 'Y' );

    return 0;
}
