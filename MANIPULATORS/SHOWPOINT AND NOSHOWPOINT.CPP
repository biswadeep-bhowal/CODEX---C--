// PROGRAM TO ILLUSTRATE THE SHOWPOINT AND NOSHOWPOINT MANIPULATORS£inc

#include <iostream>

using namespace std;

int main()
{
    double d = 1.2349;

    cout << "d = " << showpoint << d << endl;
    cout << "d = " << noshowpoint << d << endl;

    cout << "\nWhen the showpoint format flag is set, the decimal point is always written for floating point values inserted into the\nstream," << endl;
    cout << "Even for those whose decimal part is zero." << endl;
    cout << "Following the decimal point, as many digits as necessary are written to match the precision set for the stream (if any)." << endl;
    cout << "\nThis flag can be unset with the noshowpoint manipulator." << endl;

    return 0;
}

