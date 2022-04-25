// PROGRAM TO ILLUSTRATE SET DATA STRUCTURE

#include<bits/stdc++.h>
using namespace std;

int main()
{
    set< int > s = { 1, 2, 3, 4, 5 };   // DECLARATION AND INITIALISATION
    int n, choice;
    string clrscr( 30, '\n' );
    char ch;

    do
    {
        cout << clrscr;

        cout << "\t\tMENU\n1) Initialise\n2) Insert\n3) Delete\n4) Delete until a certain value\n5) Delete all Elements\n6) Search Element\n7) Display\n";
        cout << "\nEnter your choice : ";
        cin >> choice;

        switch( choice )
        {
            case 1 :
            {
                s = {};
                cout << "\nEnter Delimited List : ";
                while( ch != '\n' )
                {
                    scanf( "%d%c", &n, &ch );
                    s.insert( n );
                }

                break;
            }
            case 2 :
            {
                cout << "\nEnter new element : ";
                cin >> n;
                s.insert( n );

                break;
            }
            case 3 :
            {
                cout << "\nEnter element to be deleted : ";
                cin >> n;
                s.erase( n );

                break;
            }
            case 4 :
            {
                cout << "\nEnter value : ";
                cin >> n;

                s.erase( s.begin(), s.find( n ) );

                break;
            }
            case 5 :
            {
                s.clear();
                break;
            }
            case 6 :
            {
                cout << "\nEnter Element to be Searched : ";
                cin >> n;

                set< int > :: iterator it = s.find( n );

                if( it != s.end() ) cout << "\nElement Found At Index : " << distance( s.begin(), it );
                else                cout << "\nElement Not Found...";

                break;
            }
            case 7 :
            {
                cout << "Set Status : ";

                if( s.empty() )
                {
                    cout << "Empty";
                    break;
                }

                for( auto x : s )
                    cout << x << " ";

                break;
            }

            default :   cout << "\nINVALID INPUT..." << endl;
        }

        cout << "\n\nCONTINUE ? ( Y / N ) : ";
        fflush( stdin );
        cin >> ch;
    }while( ch == 'y' || ch == 'Y' );

    return 0;
}
