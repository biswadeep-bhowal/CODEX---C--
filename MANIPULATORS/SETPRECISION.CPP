// PROGRAM TO ILLUSTRATE THE SETPRECISION MANIPULATOR.

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int i;
    double f = 100.23456789;

    for( i = 0 ; i <= 25 ; i++ )
        cout << setprecision( i ) << f << "\t\t\ti = " << i << '\n';


    cout << "\nThe SETPRECISION manipulator sets the total number of digits to be displayed, \nwith precision, \nwhen floating point numbers are printed." << endl;

    return 0;
}
