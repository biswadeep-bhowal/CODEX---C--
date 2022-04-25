// PROGRAM TO ILLUSTRATE BINARY SEARCH TREE

#include<bits/stdc++.h>
using namespace std;


class node
{
    public :

        int data;
        node* left;
        node* right;

        node( int d = -1 )
        {
            data = d;
            left = right = NULL;
        }
};

class BST
{
    public :

        node* root;
        int* bstArray;
        int bstSize;
        int bstCapacity;

        BST()
        {
            root = NULL;

            bstArray = new int[ 1 ];
            bstCapacity = bstSize = -1;
        }
        BST( int Cap )
        {
            root = NULL;

            bstCapacity = Cap;
            bstSize = 0;
            bstArray = new int[ Cap ];
        }
        ~BST()
        {
            deleteBST( root );
            delete[] bstArray;
        }

        void deleteBST( node* );

        void displayPreOrder(   node* );
        void displayInOrder(    node* );
        void displayPostOrder(  node* );
        void displayLevelOrder( node* );

        void sortedArrayToBSTMenu();
        node* sortedArrayToBST( int, int );

};

void BST :: deleteBST( node* root )
{
    node* temp;

    if( root == NULL )
        return;

    deleteBST( root -> left );
    deleteBST( root -> right );
    delete root;
}

void BST :: displayPreOrder( node* root )
{
    if( root == NULL )
        return;

    cout << root -> data << " ";
    displayPreOrder( root -> left );
    displayPreOrder( root -> right );
}

void BST :: displayInOrder( node* root )
{
    if( root == NULL )
        return;

    displayInOrder( root -> left );
    cout << root -> data << " ";
    displayInOrder( root -> right );
}

void BST :: displayPostOrder( node* t )
{
    if( root == NULL )
        return;

    displayPostOrder( root -> left );
    displayPostOrder( root -> right );
    cout << root -> data << " ";
}


node* BST :: sortedArrayToBST( int left, int right )
{
    if( left > right )
        return NULL;
    if( left == right )
        return new node( bstArray[ left ] );

    int mid = ( left + right )/2;

    node* newNode = new node( bstArray[ mid ] );
    newNode -> left = sortedArrayToBST( left, mid - 1 );
    newNode -> right = sortedArrayToBST( mid + 1, right );

    return newNode;
}

void BST :: sortedArrayToBSTMenu()
{
    cout << "\nEnter size of the array : ";
    cin >> bstSize;
    while( bstSize > bstCapacity )
    {
        cout << "\nINVALID INPUT...Enter again : ";
        cin >> bstSize;
    }

    if( sizeof( bstArray )/sizeof( int ) < bstSize )
        bstArray = new int[ bstSize ];

    cout << "\nEnter the array elements : ";
    for( int i = 0 ; i < bstSize ; cin >> bstArray[ i++ ] );
    sort( bstArray, bstArray + bstSize );

    root = sortedArrayToBST( 0, bstSize - 1 );
}


int main()
{
    BST B( 10 );

    return 0;
}










