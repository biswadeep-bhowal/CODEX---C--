// PROGRAM TO ILLUSTRATE DEFAULT, PARAMETERISED AND COPY CONSTRUCTOR

#include<iostream>

using namespace std;

class A
{
    public :

        A()
        {
            cout << "\nInside Default Constructor!" << endl;
        }

        A( int a )
        {
            cout << "\nInside Parameterised Constructor!"  << endl;
        }

        A( A& a )
        {
            cout << "\nInside Copy Constructor!" << endl;
        }

        ~A()    // THERE IS ONLY 1 DESTRUCTOR FOR ANY GIVEN CLASS.
        {
            cout << "\nDestructor Called!" << endl;
        }
};

int main()
{
    A a;        // DEFAULT CONSTRUCTOR CALLED HERE
    A b( 1 );   // PARAMETERISED CONSTRUCTOR CALLED HERE
    A c( b );  // COPY CONSTRUCTOR CALLED HERE

    return 0;
}
