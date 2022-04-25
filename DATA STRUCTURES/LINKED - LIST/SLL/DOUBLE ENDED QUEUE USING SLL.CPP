// PROGRAM TO ILLUSTRATE DOUBLE ENDED QUEUE USING DOUBLY LINKED LIST

#include<iostream>
using namespace std;

class node
{
    public :

        int data;
        node* next;
        node* prev;

        static int N;
        static int C;

        node( int d = 0 )
        {
            data = d;
            next = prev = NULL;
        }

        static int getN(){      return N;   }
        static int getC(){      return C;   }
        static void setN( int n ){  N = n;  }
        static void setC( int c ){  C = c;  }
        static void incrementN(){   N++;    }
        static void decrementN(){   N--;    }
};

void Enqueue( node* &Front, node* &Rear )
{
    node* NEW;
    int choice, d;

    if( node :: getC() == node :: getN() )
    {
        cout << "Deque Status : Full";
        return;
    }
    else if( Front == NULL )
    {
        cout << "\nEnter data for the new node : ";
        cin >> d;

        Front = Rear = new node( d );
        node :: setN( 1 );

        return;
    }

    cout << "\nEnter dat for the new node : ";
    cin >> d;
    NEW = new node( d );

    cout << "\nEnqueue At : ";
    cout << "\n1) Front";
    cout << "\n2) Rear";

    cout << "\nEnter your choice : ";
    cin >> choice;
    while( choice < 1 || choice > 2 )
    {
        cout << "\nINVALID INPUT...Enter again : ";
        cin >> choice;
    }

    if( choice == 1 )
    {
        NEW -> next = Front;
        Front -> prev = NEW;
        Front = Front -> prev;
    }
    else
    {
        NEW -> prev = Rear;
        Rear -> next = NEW;
        Rear = Rear -> next;
    }

    node :: incrementN();
}

void Dequeue( node* &Front, node* &Rear )
{
    node* temp;
    int choice;

    if( Front == NULL )
    {
        cout << "\nDeque Status : Empty";
        return;
    }
    else if( Front == Rear )
    {
        temp = Front;
        Front = Rear = NULL;
        node :: setN( 0 );

        cout << "\nElement Dequeued : " << temp -> data;
        delete temp;

        return;
    }

    cout << "\nDelete From : ";
    cout << "\n1) Front";
    cout << "\n2) Rear";

    cout << "\nEnter your choice : ";
    cin >> choice;
    while( choice < 1 || choice > 2 )
    {
        cout << "\nINVALID INPUT...Enter again : ";
        cin >> choice;
    }

    if( choice == 1 )
    {
        temp = Front;
        Front = Front -> next;
        Front -> prev = NULL;
    }
    else
    {
        temp = Rear;
        Rear = Rear -> prev;
        Rear -> next = NULL;
    }

    cout << "\nElement Dequeued : " << temp -> data;
    delete temp;

    node :: decrementN();
}

void Display( node* &Front, node* &Rear )
{
    int choice;

    if( Front == NULL )
    {
        cout << "\nDeque Status : Empty";
        return;
    }
    else if( Front == Rear )
    {
        cout << "\nDeque Status : " << Front -> data;
        return;
    }

    cout << "Display From : ";
    cout << "\n1) Front";
    cout << "\n2) Rear";

    cout << "\nEnter your choice : ";
    cin >> choice;
    while( choice < 1 || choice > 2 )
    {
        cout << "\nINVALID INPUT...Enter again : ";
        cin >> choice;
    }

    cout << "\nDeque Status : ";

    if( choice == 1 )
    {
        for( node* temp = Front ; temp != NULL ; temp = temp -> next )
        {
            cout << temp -> data;
            if( temp != Rear )
                cout << " <-> ";
        }
    }
    else
    {
        for( node* temp = Rear ; temp != NULL ; temp = temp -> prev )
        {
            cout << temp -> data;
            if( temp != Front )
                cout << " <-> ";
        }
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
    node :: setC( 5 );

    do
    {
        cout << string( 30, '\n' );

        cout << "\nMENU";
        cout << "\n1) Enqueue";
        cout << "\n2) Dequeue";
        cout << "\n3) Display";

        cout << "\n\nEnter your choice : ";
        cin >> choice;

        switch( choice )
        {
            case 1 : Enqueue( Front, Rear );    break;
            case 2 : Dequeue( Front, Rear );    break;
            case 3 : Display( Front, Rear );    break;

            default : cout << "\nINVALID INPUT...";
        }

        cout << "\n\nContinue ? ( Y / N ) : ";
        cin >> ch;
    }while( ch == 'y' || ch == 'Y' );

    cout << "\nClearing Deque...";
    node* temp;
    while( Front != NULL )
    {
        temp = Front;
        Front = Front -> next;
        cout << "\nElement Dequeued : " << temp -> data;
        delete temp;
    }

    return 0;
}
