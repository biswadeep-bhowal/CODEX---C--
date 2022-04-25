// PROGRAM TO ILLUSTRATE STACK USING LINKEDLIST

#include<iostream>
using namespace std;

class node
{
    public :

        int data;
        node* next;

        static int N;   // NUMBER OF NODES.
        static int C;   // TOTAL CAPACITY OF STACK.

        node( int d = 0 )
        {
            data = d;
            next = NULL;
        }

        static void setN( int x ){  N = x;  }
        static int getN(){      return N;   }
        static void Increment(){    N++;    }
        static void Decrement(){    N--;    }
        static void setCap( int c ){ C = c; }
        static int getCap(){    return C;   }
};

void push( node* &top )
{
    node* NEW;
    int d;

    if( node :: getN() == node :: getCap() )
    {
        cout << "\nStack Overflow...";
        return;
    }

    cout << "\nEnter data for the new node : ";
    cin >> d;

    NEW = new node( d );

    NEW -> next = top;
    top = NEW;

    node :: Increment();
}

void pop( node* &top )
{
    if( top == NULL )
    {
        cout << "\nStack Underflow...";
        return;
    }

    node* temp = top;
    top = top -> next;

    cout << "\nElement Popped : " << temp -> data ;
    delete temp;

    node :: Decrement();
}

void display( node* &top )
{
    cout << "\nStack Status : ";

    if( top == NULL )
    {
        cout << "Empty.";
        return;
    }

    for( node* temp = top ; temp != NULL ; temp = temp -> next )
    {
        cout << temp -> data;
        if( temp -> next != NULL )
            cout << " -> ";
    }
}

int node :: N = 0;
int node :: C = 0;

int main()
{
    node* top;
    int choice;
    char ch;

    top = NULL;
    node :: setCap( 10 );

    do
    {
        cout << string( 30, '\n' );

        cout << "\tMENU";
        cout << "\n1) Push";
        cout << "\n2) Pop";
        cout << "\n3) Display";

        cout << "\nEnter your choice : ";
        cin >> choice;

        switch( choice )
        {
            case 1 : push( top );       break;
            case 2 : pop( top );        break;
            case 3 : display( top );    break;

            default : cout << "\nINVALID INPUT...Enter again : ";
        }

        cout << "\n\nContinue ? ( Y / N ) : ";
        cin >> ch;
    }while( ch == 'y' || ch == 'Y' );

    cout << "\nClearing Stack...\n";
    while( top != NULL )
        pop( top );

    return 0;
}
