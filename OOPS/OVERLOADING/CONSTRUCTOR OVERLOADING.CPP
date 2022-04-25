// PROGRAM TO ILLUSTRATE CONSTRUCTOR OVERLOADING

#include<iostream>

using namespace std;

class Area
{
    public :

        Area( int a ){          cout << "\nArea = " << a*a << " sq. units" << endl;     }
        Area( int a, int b ){   cout << "\nArea = " << a*b << " unit sq." << endl;      }
        Area( double r ){       cout << "\nArea = " << 3.14*r*r << " unit sq." << endl;      }
};

int main()
{
    Area Square( 5 );
    Area Rectangle( 10, 6 );
    Area Circle( 6.022 );

    cout << "\nOverloaded constructors essentially have the same name (name of the class) and different number of arguments." << endl;
    cout << "A constructor is called depending upon the number and type of arguments passed." << endl;
    cout << "While creating the object, arguments must be passed to let compiler know, which constructor needs to be called. " << endl;

    return 0;
}
