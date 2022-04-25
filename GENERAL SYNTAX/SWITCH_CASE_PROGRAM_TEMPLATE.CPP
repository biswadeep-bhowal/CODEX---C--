#include<iostream>

using std :: cout;
using std :: cin;
using std :: endl;

int Menu()
{
    int choice;

    for( choice = 30 ; choice > 0 ; choice--, cout << '\n' ) ;

    cout << "\t\tMENU" << endl;
    for( choice = 0 ; choice < 30 ; choice++, cout << '_' );
    cout << '\n';

    cout << "\n1) " << '\n';
    cout << "\n2) " << '\n';
    cout << "\n3) " << '\n';
    cout << "\n4) " << '\n';
    cout << "\n5) " << '\n';

    cout << "\nEnter your choice : ";
    cin >> choice;

    return choice;
}

bool Continue()
{
    char ch;

    fflush( stdin );
    cout << "\n\nCONTINUE TO MENU ? ( Y / N ) : ";
    cin >> ch;

    return ( ch == 'y' || ch == 'Y' );
}

int main()
{
    do
    {
        switch( Menu() )
        {
            case 1 : break;
            case 2 : break;
            case 3 : break;
            case 4 : break;
            case 5 : break;

            default : cout << "INVALID INPUT..." << endl;
        }

    }while( Continue() );

    return 0;
}
