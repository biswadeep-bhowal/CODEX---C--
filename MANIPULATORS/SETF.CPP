// PROGRAM TO ILLUSTRATE THE SETF MANIPULATOR

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int x = 999;
    double d = 3.1416;
    string str = "Hello World";

    cout << "x = " << x << endl;

    cout.setf( ios :: dec, ios :: basefield );
    cout << "Decimal Equivalent : " << x << endl;   // SETF( FLAG VALUE, FIELD BITMASK )
    cout.unsetf( ios :: basefield );

    cout.setf( ios :: oct, ios :: basefield );  // ACTIVATE BASEFIELD
    cout << "Octal Equivalent : " << x << endl;
    cout.unsetf( ios :: basefield );            // DE - ACTIVATE BASEFIELD

    cout.setf( ios :: hex, ios :: basefield );
    cout << "Hexadecimal Equivalent : " << x << endl << endl;
    cout.unsetf( ios :: basefield );

    cout.setf( ios :: left, ios :: adjustfield );
    cout.width( 15 );
    cout << str << endl;
    cout.unsetf( ios :: adjustfield );

    cout.setf( ios :: right, ios :: adjustfield );
    cout.width( 15 );
    cout << str << endl << endl;
    cout.unsetf( ios :: adjustfield );

    cout.setf( ios :: fixed, ios :: floatfield );
    cout << "d = " << d << endl;
    cout.unsetf( ios :: floatfield );

    cout.setf( ios :: scientific, ios :: floatfield );
    cout << "d = " << d << endl;
    cout.unsetf( ios :: floatfield );

    return 0;
}
