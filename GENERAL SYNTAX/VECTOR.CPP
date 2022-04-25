//PROGRAM TO ILLUSTRATE VECTOR SYNTAX

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector < int > v;
    int i;
    char ch = 'y';

    do
    {
        cout << "\nEnter element : ";
        cin >> i;
        v.push_back( i );

        cout << "\nCONTINUE ? ( Y / N ) : ";
        cin >> ch;
    }while( ch == 'y' || ch == 'Y' );

    for( printf( "\n\nGiven Vector : " ), i = 0 ; i < v.size() ; cout << v[ i++ ] << "," );

    return 0;
}
