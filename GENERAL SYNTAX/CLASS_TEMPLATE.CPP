// PROGRAM TO ILLUSTRATE CLASS TEMPLATE SYNTAX

#include<iostream>

using namespace std;

template< class T >
class Element
{
    public :

        T value;

        Element( T t ){  value = t;  }
        T add( T t ){   return value + t;   }
};

int main()
{
    Element< int > e1( 100 );
    cout << e1.add( 69 ) << endl;

    Element< double > e2( 3.14 );
    cout << e2.add( 32.45 ) << endl;

    Element< string > e3( "Hello " );
    cout << e3.add( "World !\n" );

    return 0;
}
