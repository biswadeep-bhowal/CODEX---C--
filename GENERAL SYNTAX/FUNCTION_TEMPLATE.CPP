// PROGRAM TO ILLUSTRATE FUNCTION TEMPLATE
// BUBBLE SORT

#include<iostream>

using namespace std;

template< typename T >

void BubbleSort( T* arr, int n )
{
    int i, j, flag;
    T k;

    for( flag = 1, i = 0 ; i < n && flag == 1 ; i++ )
    {
        for( j = 0, flag = 0 ; j < n - i - 1 ; j++ )
        {
            if( arr[ j ] > arr[ j+1 ] )
            {
                k = arr[ j ];
                arr[ j ] = arr[ j+1 ];
                arr[ j+1 ] = k;

                flag = 1;
            }
        }
    }
}

int main()
{
    int i[ 5 ] = { 5, 4, 3, 2, 1 };
    char c[ 5 ] = { 'e', 'd', 'c', 'b', 'a' };
    double d[ 5 ] = { 5.5, 4.4, 3.3, 2.2, 1.1 };

    BubbleSort( i, 5 );
    BubbleSort( c, 5 );
    BubbleSort( d, 5 );

    cout << "Integer Array : ";
    for( auto x : i )cout << x << ", ";
    cout << "\b\b \b"<< endl;

    cout << "Character Array : ";
    for( auto x : c )cout << x << ", ";
    cout << "\b\b \b"<< endl;

    cout << "Double Array : ";
    for( auto x : d )cout << x << ", ";
    cout << "\b\b \b"<< endl;

    return 0;
}
