// DYNAMIC I-D ARRAY OPERATIONS

#include<iostream>
#include<stdlib.h>

using namespace std;

void clrscr( int n ){   while( n-- && printf( "\n" ) );    }

void Initialise( int* arr, int* arr_size )
{
    char ch;
    *arr_size = 0;

    do
    {
        arr = ( int* )realloc( arr, ++( *arr_size ) );

        cout << "\nEnter element : ";
        cin >> arr[ *arr_size - 1 ];

        fflush( stdin );
        cout << "\nCONTINUE ? ( Y / N ) : ";
        cin >> ch;
    }while( ch == 'y' || ch == 'Y' );
}

void Insert( int* arr, int* arr_size )
{
    int element, position, i;
    arr = ( int* )realloc( arr, ++( *arr_size ) );

    cout << "\nEnter new element : ";
    cin >> element;

    cout << "\nEnter position of insertion : ";
    cin >> position;
    while( position < 1 || position > *arr_size )
    {
        cout << "\nINVALID POSITION...Enter again : ";
        cin >> position;
    }
    position--;

    for( i = *arr_size - 1 ; i > position ; i-- )   arr[ i ] = arr[ i-1 ];
    arr[ i ] = element;
}

void Delete( int* arr, int* arr_size )
{
    int element, position;

    cout << "\nEnter position of element : ";
    cin >> position;
    while( position < 1 || position > *arr_size )
    {
        cout << "\nINVALID POSITION...Enter again : ";
        cin >> position;
    }
    element = arr[ --position ];

    for( int i = position ; i < *arr_size - 1 ; i++ )   arr[ i ] = arr[ i+1 ];
    arr = ( int* )realloc( arr, --( *arr_size ) );

    cout << "\nElement Deleted : " << element;
}

void Search( int* arr, int* arr_size )
{
    int element, position;

    cout << "\nEnter element to be searched : ";
    cin >> element;

    for( position = 0 ; position < *arr_size ; position++ )
    {
        if( arr[ position ] == element )
        {
            cout << "\nElement Found At : " << position;
            return;
        }
    }

    cout << "\nElement Not Found...";
}

void Display( int* arr, int* arr_size )
{
    cout << "\nArray Status : ";

    if( *arr_size == 0 )
    {
        cout << " Empty.";
        return;
    }

    for( int i = 0 ; i < *arr_size ; cout << arr[ i++ ] << " " );
}

int main()
{
    int *arr, arr_size, choice;
    char ch;

    arr = ( int* )malloc( 0 );
    arr_size = 0;

    do
    {
        clrscr( 50 );

        cout << "\t\tMENU" << endl;
        cout << "1) Initialise Array" << endl;
        cout << "2) Insert Element" << endl;
        cout << "3) Delete Element" << endl;
        cout << "4) Search Element" << endl;
        cout << "5) Display Array" << endl;
        cout << "6) Exit" << endl;

        cout << "\nEnter your choice : ";
        cin >> choice;

        switch( choice )
        {
            case 1 : Initialise( arr, &arr_size );  break;
            case 2 : Insert( arr, &arr_size );      break;
            case 3 : Delete( arr, &arr_size );      break;
            case 4 : Search( arr, &arr_size );      break;
            case 5 : Display( arr, &arr_size );     break;
            case 6 : free( arr );                   return 0;

            default : cout << "\nINVALID INPUT...";
        }

        fflush( stdin );
        cout << "\nCONTINUE ? ( Y / N ) : ";
        cin >> ch;
    }while( ch == 'y' || ch == 'Y' );

    free( arr );
    return 0;
}
