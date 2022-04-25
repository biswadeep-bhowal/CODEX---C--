// PROGRAM TO ILLUSTRATE THE LEVEL ORDER TRAVERSAL OF A BINARY TREE

#include<iostream>
using namespace std;

class node
{
    public :

        int data;
        node* left;
        node* right;

        static int N;

        node( int d )
        {
            data = d;
            left = right = NULL;
        }
        int height( node* );

        static int getN();
        static void setN( int );
        static void incrementN();
        static void decrementN();
};


node* constructLevelOrder( int arr[], int n, int index )
{
    node* root = NULL;

    if( index < n )
    {
        root = new node( arr[ index ] );

        root -> left = constructLevelOrder( arr, n, 2*index + 1 );
        root -> right = constructLevelOrder( arr, n, 2*index + 2 );
    }

    return root;
}

void displayInorder( node* t )
{
    if( t == NULL )
        return;

    displayInorder( t -> left );
    cout << t -> data << " ";
    displayInorder( t -> right );
}

void displayLevelOrder( node* t )
{

}














int node :: N = 0;
int main()
{
    node *root = NULL;
    int choice;
    char ch;

    int arr[ 9 ] = { 1, 2, 3, 4, 5, 6, 6, 6, 6 };
    int n = 9;

    root = constructLevelOrder( arr, n, 0 );
    displayInorder( root );

    do
    {
        cout << string( '\n' );

        cout << "\tMENU";
        cout << "\n1) ";
        cout << "\n";
        cout << "\n";
        cout << "\n";

        cout << "\n\nEnter your choice : ";
        cin >> choice;

        cout << "\nEnter size of the Array : ";
        cin >> n;
        cout << "\nENter Array : Elements :\n";
        for( int i = 0 ; i < n ; cin >> arr[ i++ ] );

        switch( choice )
        {
        case 1 :
            constructPreorder()
        case 2 :
        case 3 :
        case 4 :
        }
    }while( ch == 'y' || ch == 'Y' );

    delete root;
    return 0;

}







