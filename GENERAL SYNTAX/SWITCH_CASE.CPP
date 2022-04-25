// PROGRAM TO ILLUSTRATE SWITCH CASE

#include<iostream>

using namespace std;

void clrscr( int i ){   while( i-- && printf( "\n" ) );    }
int main()
{
    double x, y;
    int choice;
    char ch = 'y';

    do
    {
        clrscr( 50 );
        cout << "\t\tCALCULATOR\n" << "1)Add\n2)Subtract\n3)Multiply\n4)Divide\n5)Exit\n\nEnter your choice : ";
        cin >> choice;

        if( choice > 0 && choice < 5 )
        {
            cout << "\nx = ";
            cin >> x;
            cout << "\ny=";
            cin >> y;
        }

        switch( choice )
        {
            case 1 : cout << x << " + " << y << " = " << x + y;     break;
            case 2 : cout << x << " - " << y << " = " << x - y;     break;
            case 3 : cout << x << " * " << y << " = " << x * y;     break;
            case 4 : cout << x << " / " << y << " = " << x / y;     break;
            case 5 : return 0;

            default : cout << "INVALID INPUT...";
        }

        cout << "\n\nCONTINUE ? ( Y / N ) : ";
        cin >> ch;
    }while( ch == 'y' || ch == 'Y' );

    return 0;
}
