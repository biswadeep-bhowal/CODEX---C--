// PROGRAM TO ILLUSTRATE THE MANIPULATORS DEFINED INSIDE <ios>

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int num = 625;
    double d = 6.022;
    cout << "\nNumber = " << showpos << num << noshowpos << endl;

    cout << "\nDecimal Equivalent : " << dec << showbase << uppercase << num << endl;
    cout << "Octal Equivalent : " << oct << nouppercase << showbase << num << endl;
    cout << "Hexadecimal Equivalent : " << hex << showbase << uppercase << num << endl;

    cout << setw( 50 ) << right << "Right Justified" << endl;
    cout << setw( 50 ) << left << "Left Justified" << endl;

    cout << "\nSETW IS INCLUDED INSIDE IOMANIP." << endl;

    cout << "\nNumber : " << d << endl;
    cout << "Fixed Notation : " << fixed << d << endl;
    cout << "Scientific Notation : " << scientific << d << endl;
}
