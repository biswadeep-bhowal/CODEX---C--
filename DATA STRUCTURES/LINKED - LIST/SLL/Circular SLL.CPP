// PROGRAM TO ILLUSTRATE CIRCULAR LINKED LIST, PURELY USING CLASSES

#include<iostream>
using namespace std;

class node
{
    public :

        int data;
        node* next;

        static int N;   // NUMBER OF NODES.

        node( int d = 0 )
        {
            data = d;
            next = NULL;
        }

        static void increment(){    N++;    }
        static void decrement(){    N--;    }
        static void set0(){         N = 0;  }
        static void set1(){         N = 1;  }
        static int getN(){      return N;   }
};

void Initialise( node* &head, node* &tail )
{
    node* NEW;
    int d;
    char ch;

    head = tail = NULL;

    cout << "\nEnter data for new node : ";
    cin >> d;

    head = tail = new node( d );
    node :: set1();

    cout << "\n\nContinue Appending ? ( Y / N ) : ";
    cin >> ch;
    while( ch == 'y' || ch == 'Y' )
    {
        cout << "\nEnter data for the new node : ";
        cin >> d;

        NEW = new node( d );

        NEW -> next = head;
        tail -> next = NEW;
        tail = tail -> next;

        node :: increment();

        cout << "\nContinue Appending ? ( Y / N ) : ";
        cin >> ch;
    }
}

void Display( node* &head )
{
    cout << "\nList Status : ";

    if( head == NULL )
    {
        cout << "Empty.";
        return;
    }
    if( head -> next == NULL )
    {
        cout << head -> data;
        return;
    }

    for( node* temp = head ; ; temp = temp -> next )
    {
        cout << temp -> data;

        if( temp -> next == head )  break;
        else                        cout << " -> ";
    }
}

void Insert( node* &head, node* &tail )
{
    node *NEW, *temp;
    int choice, position, i;

    NEW = new node;
    cout << "\nEnter data for the new node : ";
    cin >> NEW -> data;

    if( head == NULL )
    {
        head = tail = NEW;
        node :: set1();
        return;
    }

    cout << "\nInsert : ";
    cout << "\n1)Before";
    cout << "\n2) After";
    cout << "\n\nEnter your choice : ";
    cin >> choice;

    while( choice < 1 || choice > 2 )
    {
        cout << "\nINVALID INPUT...Enter again : ";
        cin >> choice;
    }

    if( choice == 1 )
    {
        cout << "\nInsert Before : ";
        cin >> position;

        while( position < 1 || position > node :: getN() )
        {
            cout << "\nINVALID INPUT...Enter again : ";
            cin >> position;
        }

        if( position == 1 )
        {
            NEW -> next = head;
            tail -> next = NEW;
            head = NEW;
        }
        else
        {
            for( temp = head, i = 1 ; i < position - 1 ; i++, temp = temp -> next );

            NEW -> next = temp -> next;
            temp -> next = NEW;
        }
    }
    else
    {
        cout << "\nInsert After Position : ";
        cin >> position;
        while( position < 1 || position > node :: getN() )
        {
            cout << "\nINVALID INPUT...Enter again : ";
            cin >> position;
        }

        if( position == head -> N )
        {
            NEW -> next = head;
            tail -> next = NEW;
            tail = tail -> next;
        }
        else
        {
            for( temp = head, i = 1 ; i < position ; i++, temp = temp -> next );

            NEW -> next = temp -> next;
            temp -> next = NEW;
        }
    }

    node :: increment();
}

void Delete( node* &head, node* &tail )
{
    node *NEW, *temp;
    int position, i;

    if( head == NULL )
    {
        cout << "\nLinkedList Status : Empty.\n";
        return;
    }
    if( node :: getN() == 1 )
    {
        NEW = head;
        head = tail = NULL;

        cout << "\nElement Deleted : " << NEW -> data;
        delete NEW;

        return;
    }

    cout << "\nEnter position of element to be deleted : ";
    cin >> position;
    while( position < 1 || position > node :: getN() )
    {
        cout << "\nINVALID INPUT...Enter again : ";
        cin >> position;
    }

    if( position == 1 )
    {
        NEW = head;
        head = head -> next;
        tail -> next = head;
    }
    else if( position == node :: getN() )
    {
        for( temp = head ; temp -> next != tail ; temp = temp -> next );

        NEW = tail;
        temp -> next = head;
        tail = temp;
    }
    else
    {
        for( temp = head, i = 1 ; i < position - 1 ; i++, temp = temp -> next );
        NEW = temp -> next;
        temp -> next = temp -> next -> next;
    }

    cout << "\nElement Deleted : " << NEW -> data;
    node :: decrement();
    delete NEW;

    if( node :: getN() == 0 )
        head = tail = NULL;
}

int node :: N = 0;  // MOST IMPORTANT LINE FOR USING STATIC DATA MEMBERS

int main()
{
    node *head, *tail;
    int choice;
    char ch;

    head = tail = NULL;
    node :: set0();

    do
    {
        cout << string( 30, '\n' );

        cout << "\tMENU";
        cout << "\n1) Initialise";
        cout << "\n2) Insert";
        cout << "\n3) Delete";
        cout << "\n4) Display";

        cout << "\n\nEnter your choice : ";
        cin >> choice;

        switch( choice )
        {
            case 1 : Initialise( head, tail );  break;
            case 2 : Insert( head, tail );      break;
            case 3 : Delete( head, tail );      break;
            case 4 : Display( head );           break;

            default : cout << "\nINVALID INPUT...Enter again : ";
        }

        cout << "\n\nContinue to Menu ? ( Y / N ) : ";
        cin >> ch;
    }while( ch == 'y' || ch == 'Y' );

    return 0;
}
