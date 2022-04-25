#include<iostream>

using namespace std;

void clrscr( int n ){   while( n-- && cout << "\n" ); }

class Area
{
    public :

        Area( int n )       {   cout << "\nArea of Square : " << n*n << endl;       }
        Area( int m, int n ){   cout << "\nArea of Rectangle : " << m*n <<  endl;   }
        Area( float r )     {   cout << "\nArea of Circle : " << 22*r/7 << endl;    }
};

int main()
{
    int choice, m, n;
    float r;
    char ch = 'y';

    do
    {
        clrscr( 50 );

        cout << "\nMENU" << endl;
        cout << "1) Area of Square" << endl;
        cout << "2) Area of Rectangle" << endl;
        cout << "3) Area of Circle" << endl;
        cout << "\n\nEnter your choice : ";

        cin >> choice;
        clrscr( 50 );

        switch( choice )
        {
            case 1 :

                cout << "\nEnter side of Square : ";
                cin >> n;

                new Area( n );
                break;

            case 2 :

                cout << "\nEnter length of Rectangle : ";
                cin >> m;
                cout << "\nEnter Breadth of Rectangle : ";
                cin >> n;

                new Area( m, n );
                break;

            case 3 :

                cout << "\nEnter radius of Circle : ";
                cin >> r;

                new Area( r );
                break;

            default : cout << "nInvalid Input...";
        }

        fflush( stdin );
        cout << "\nCONTINUE ? ( Y / N ) : ";
        cin >> ch;
    }while( ch == 'y' || ch == 'Y' );

    return 0;
}
