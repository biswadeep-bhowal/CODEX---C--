// PROGRAM TO ILLUSTRATE BINARY SEARCH TREE USING LINKED LIST

#include<iostream>
using namespace std;

class node
{
    public :

        int data;
        node* left;
        node* right;

        static int N;
        static int getN(){              return N;   }
        static void setN( int n ){      N = n;      }
        static void incrementN(){       N++;        }
        static void decrementN(){       N--;        }

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

node* constructPreorder( int* arr, int left, int right )
{
    node *root, *NEW, *temp;

    root = new node( arr[ left ] ); // CREATED THE ROOT NODE. THIS IS THE FIRST ELEMENT.
    node :: setN( 1 );

    for( int i = left + 1 ; i <= right ; i++ )
    {
        NEW = new node( arr[ i ] );

        temp = root;
        while( temp != NULL )
        {
            if( NEW -> data <= temp -> data )
            {
                if( temp -> left != NULL )
                    temp = temp -> left;
                else
                {
                    temp -> left = NEW;
                    node :: incrementN();
                    break;
                }
            }
            else
            {
                if( temp -> right != NULL )
                    temp = temp -> right;
                else
                {
                    temp -> right = NEW;
                    node :: incrementN();
                    break;
                }
            }
        }
    }

    return root;
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

int findLeftRootIndex( int* arr, int left, int right, int key )
{
    int leftRootIndex = -1; // Considering tree has only positive integers

    for( int i = left ; i <= right ; i++ )
    {
        if( arr[ i ] <= key )
            leftRootIndex = i;
    }

    return leftRootIndex;
}
node* constructPostorder( int* arr, int left, int right )
{
    if( left > right )
        return NULL;

    if( left == right )
        return new node( arr[ right ] );

    node* root = new node( arr[ right ] );

    int leftRootIndex = findLeftRootIndex( arr, left, right - 1, arr[ right ] );
    int rightRootIndex = right - 1;


    if( leftRootIndex > -1 && leftRootIndex < rightRootIndex )
    {
        root -> left =  constructPostorder( arr, left, leftRootIndex );
        root -> right = constructPostorder( arr, leftRootIndex + 1, rightRootIndex );
    }

    else if( leftRootIndex == -1 )
        root -> right = constructPostorder( arr, left, rightRootIndex );

    else if( leftRootIndex == rightRootIndex )
        root -> left = constructPostorder( arr, leftRootIndex, leftRootIndex );

    return root;
}
void searchBST( node* root )
{
    int element;

    cout << "\nElement To Be Searched : ";
    cin >> element;

    while( true )
    {
        if( root -> data == element )
        {
            cout << "\nElement Found !!!";
            return;
        }
        else if( root == NULL )
        {
            cout << "\nElement Not Found...";
            return;
        }
        else if( root -> data >= element )
            root = root -> left;
        else if( root -> data < element )
            root = root -> right;
    }
}

void displayPreorder( node* t )
{
    if( t == NULL )
        return;

    cout << t -> data << " ";
    displayPreorder( t -> left );
    displayPreorder( t -> right );
}

void displayInorder( node* t )
{
    if( t == NULL )
        return;

    displayInorder( t -> left );
    cout << t -> data << " ";
    displayInorder( t -> right );
}

void displayPostorder( node* t )
{
    if( t == NULL )
        return;

    displayPostorder( t -> left );
    displayPostorder( t -> right );
    cout << t -> data << " ";
}

void searchBST( node* Node, int element )
{
    if( Node == NULL )
        cout << "\nElement Not Found...";
    else if( Node -> data == element )
        cout << "\nElement Found !!!";
    else if( element < Node -> data )
        searchBST( Node -> left, element );
    else if( element > Node -> data )
        searchBST( Node -> right, element );
}

int height( node* root )
{
    if( root == NULL )
        return 0;

    int leftHeight = height( root -> left );
    int rightHeight = height( root -> right );

    if( leftHeight > rightHeight )  return leftHeight + 1;
    else                            return rightHeight + 1;

}

node* constructLevelOrder( int *arr, int n, int index )
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

void displayCurrentLevel( node* root, int level )
{
    if( root == NULL )
        return;
    if( level == 1 )
        cout << root -> data << ' ';
    else
    {
        displayCurrentLevel( root -> left, level - 1 );
        displayCurrentLevel( root -> right, level - 1 );
    }
}

void displayLevelOrder( node* root )
{
    int h = height( root );

    for( int i = 1 ; i <= h ; i++ )
        displayCurrentLevel( root, i );
}

void deleteTree( node* t )
{
    if( t == NULL )
        return;

    deleteTree( t -> left );
    deleteTree( t -> right );

    delete t;
}

int node :: N = 0;

int main()
{
    node *root = NULL;
    int* arr;
    int choice, n;
    char ch;

    do
    {
        cout << string( 30, '\n' );

        cout << "\tMENU";
        cout << "\n1)CONSTRUCT BST FROM PREORDER TRAVERSAL ARRAY";
        cout << "\n2)CONSTRUCT BST FROM INORDER TRAVERSAL ARRAY";
        cout << "\n3)CONSTRUCT BST FROM POSTORDER TRAVERSAL ARRAY";
        cout << "\n4)CONSTRUCT BINARY TREE FROM LEVEL ORDER TRAVERSAL ARRAY";

        cout << "\n\nEnter your choice : ";
        cin >> choice;

        cout << "\nEnter size of the Array : ";
        cin >> n;

        node :: setN( n );
        arr = new int[ n ];

        cout << "\nEnter Array Elements in respective Order:\n";
        for( int i = 0 ; i < n ; cin >> arr[ i++ ] );

        switch( choice )
        {
            case 1 :
                root = constructPreorder( arr, 0, n-1 );
                displayPreorder( root );
                cout << "\nHeight of Tree : " << height( root );
                break;
            case 2 :
                root = constructInorder( arr, 0, n-1 );
                displayInorder( root );
                cout << "\nHeight of Tree : " << height( root );
                break;
            case 3 :
                root = constructPostorder( arr, 0, n-1 );
                displayPostorder( root );
                cout << "\nHeight of Tree : " << height( root );
                break;
            case 4 :
                root = constructLevelOrder( arr, n, 0 );
                displayLevelOrder( root );
                cout << "\nHeight of Tree : " << height( root );
                break;

            default : cout << "\nINVALID INPUT...";
        }

        cout << "\n\nContinue ? ( Y / N ) : ";
        cin >> ch;
    }while( ch == 'y' || ch == 'Y' );

    deleteTree( root );
    delete[] arr;
    return 0;
}









