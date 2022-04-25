// PROGRAM TO CONVERT BINARY TREE TO ARRAY

#include<iostream>
using namespace std;

class node
{
    public :

    int data;
    node *left, *right;

    node( int d )
    {
        data = d;

        left = right = NULL;
    }
};

int findMax( int* arr, int left, int right )
{
    int m = left;
    for( int i = left + 1 ; i <= right ; i++ )
    {
        if( arr[ m ] < arr[ i ] )
            m = i;
    }
    return m;
}

node* constructInorder( int* arr, int left, int right )
{
    if( left > right )
        return NULL;

    if( left == right )
        return new node( arr[ left ] );

    int Max = findMax( arr, left, right );
    node* NEW = new node( arr[ Max ] );

    NEW -> left = constructInorder( arr, left, Max-1 );
    NEW -> right = constructInorder( arr, Max+1, right );

    return NEW;
}

void displayInorder( node* t )
{
    if( t == NULL )
        return;

    displayInorder( t -> left );
    cout << t -> data << ' ';
    displayInorder( t -> right );
}

void convertToArray( node* root, int* &arr, int index, int n )
{
    if( index > n-1 || root == NULL )
        return;

    //cout << "\nAt : " << root -> data;

    arr[ index ] = root -> data;
    convertToArray( root -> left, arr, 2*index + 1, n );
    convertToArray( root -> right, arr, 2*index + 2, n );

}

int main()
{
    node* root = NULL;

    int *arr = new int[ 5 ];
    for( int i = 0 ; i < 5 ; arr[ i++ ] = -1 );
    arr[ 0 ] = 4;
    arr[ 1 ] = 2;
    arr[ 2 ] = 5;
    arr[ 3 ] = 1;
    arr[ 4 ] = 3;

    int n = 5;

    root = constructInorder( arr, 0, n-1 );
    cout << "\nInorder Traversal : ";
    displayInorder( root );
    cout << endl;
    convertToArray( root, arr, 0, n );
    cout << endl;

    for( int i = 0 ; i < n ; cout << arr[ i++ ] << ' ' );

    return 0;
}
