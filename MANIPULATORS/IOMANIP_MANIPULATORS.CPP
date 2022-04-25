// PROGRAMM TO ILLUSTRATE IOMANIP MANIPULATORS

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    double d = 12.34567;
    int x = 29;

    cout << setw( 50 ) << setfill( '_' ) << right << "Hello World!" << endl;
    cout << setprecision( 4 ) << d << endl;
    cout  << setbase( 16 ) << x << endl;
    cout << setiosflags( ios :: dec ) << x << endl;
    cout << setiosflags( ios :: showpos | ios :: dec ) << x << endl;
    cout << resetiosflags( ios :: scientific | ios :: showbase ) << d;

    return 0;
}
