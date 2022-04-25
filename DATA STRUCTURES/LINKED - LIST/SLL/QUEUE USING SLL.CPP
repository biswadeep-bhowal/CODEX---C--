// PROGRAM TO ILLUSTRATE QUEUE USING SLL

#include<iostream>
using namespace std;

class node
{
    public :

        int data;
        node* next;

        static int N;
        static int C;

        node( int d )
        {
            data = d;
            next = NULL;
        }

        static int getN(){      return N;   }
        static int getC(){      return C;   }
        static void setN( int n ){ N = n;   }
        static void setC( int c ){ C = c;   }
        static void incrementN(){   N++;    }
        static void decrementN(){   N--;    }
};

void Enqueue( node* &Front, node* &Rear )
{
    node* NEW;
    int d;

    if( node :: getN() == node :: getC() )
    {
        cout << "\nQueue Status : Full";
        return;
    }

    cout << "\nEnter data for the new node : ";
    cin >> d;

    if( Rear == NULL )
        Front = Rear = new node( d );
    else
    {
        NEW = new node( d );
        Rear -> next = NEW;
        Rear = Rear -> next;
    }

    node :: incrementN();
}

void Dequeue( node* &Front, node* &Rear )
{
    node* temp;

    if( Front == NULL )
    {
        cout << "\nQueue Status : Empty";
        return;
    }
    else if( Front == Rear )
    {
        cout << "\nElement Dequeued : " << Front -> data;
        Front = Rear = NULL;
        node :: setN( 0 );
    }
    else
    {
        temp = Front;
        Front = Front -> next;

        cout << "\nElement Dequeued : " << temp -> data;
        node :: decrementN();
        delete temp;
    }
}

void Display( node* &Front )
{
    cout << "Queue Status : ";

    if( Front == NULL )
    {
        cout << "Empty";
        return;
    }

    for( node* temp = Front ; temp != NULL ; temp = temp -> next )
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
    node *Front, *Rear;
    int choice;
    char ch;

    Front = Rear = NULL;
    node :: setC( 3 );

    do
    {
        cout << string( 30, '\n' );

        cout << "\tMENU";
        cout << "\n1) Enqueue";
        cout << "\n2) Dequeue";
        cout << "\n3) Display";

        cout << "\n\nEnter your choice : ";
        cin >> choice;

        switch( choice )
        {
            case 1 : Enqueue( Front, Rear );    break;
            case 2 : Dequeue( Front, Rear );    break;
            case 3 : Display( Front );          break;

            default : cout << "\nINVALID INPUT...";
        }

        cout << "\nContinue ? ( Y / N ) : ";
        cin >> ch;
    }while( ch == 'y' || ch == 'Y' );

    cout << "\nClearing Queue...";
    while( Rear != NULL )
        Dequeue( Front, Rear );

    return 0;
}
