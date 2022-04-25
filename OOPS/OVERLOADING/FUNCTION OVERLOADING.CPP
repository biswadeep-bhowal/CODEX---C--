// PROGRAM TO ILLUSTRATE FUNCTION OVERLOADING.

#include<iostream>

using namespace std;

class Calculate
{
    public :

        void area( int a ){         cout << "\nArea = " << a*a << " sq. units" << endl;     }
        void area( int a, int b ){  cout << "\nArea = " << a*b << " unit sq." << endl;      }
        void area( double r ){      cout << "\nArea = " << 3.14*r*r << " unit sq." << endl; }
};

int main()
{
    Calculate c;

    c.area( 10 );
    c.area( 10, 5 );
    c.area( 6.022 );

    cout << "\nFunction overloading is a feature in C++ where two or more functions can have the same name but different parameters." << endl;
    cout << "It can be considered as an example of polymorphism feature in C++." << endl;

    return 0;
}
