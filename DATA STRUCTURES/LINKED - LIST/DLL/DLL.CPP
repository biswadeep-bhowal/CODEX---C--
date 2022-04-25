//PROGRAM TO ILLUSTRATE A DOUBLY LINKED LIST

#include<iostream>
using namespace std;

class node
{
    public :

        int data;
        node *prev;
        node* next;

        static int N;

        node( int d = 0 )
        {
            data = d;
            next = prev = NULL;
        }

        static void increment(){   N++;    }
        static void decrement(){   N--;    }
        static void set0(){        N = 0;  }
        static void set1(){        N = 1;  }
        static int getN(){        return N;}
};

void Initialise( node* &head, node* &tail )
{
    node* NEW;
    int d;
    char ch;

    head = tail = NULL;

    cout << "\nEnter data for the new node : ";
    cin >> d;

    head = tail = new node( d );
    node :: set1();

    cout << "Continue Appending ? { Y / N } : ";
    cin >> ch;
    while( ch == 'y' || ch == 'Y' )
    {
        cout << "\nEnter data for the new node : ";
        cin >> d;

        NEW = new node( d );

        tail -> next = NEW;
        NEW -> prev = tail;
        tail = tail -> next;

        node :: increment();

        cout << "\nContinue Appending ? ( Y / N ) : ";
        cin >> ch;
    }

}

void Append( node* &head, node* &tail )
{
    node* NEW;
    int d;

    cout << "\nENter data for new node : ";
    cin >> d;

    NEW = new node( d );

    if( head != NULL )
    {
        tail -> next = NEW;
        NEW -> prev = tail;
        tail = tail -> next;

        node :: increment();
    }
    else
    {
        head = tail = NEW;
        node :: set1();
    }
}

void Prepend( node* &head, node* &tail )
{
    node* NEW;
    int d;

    cout << "\nEnter data for the new node: ";
    cin >> d;

    NEW = new node( d );

    if( head != NULL )
    {
        head -> prev = NEW;
        NEW -> next = head;
        head = head -> prev;
    }
    else
    {
        head = tail = NEW;
        node :: set1();
    }


    node :: increment();
}

void Insert( node* &head, node* &tail )
{
    node *NEW, *temp;
    int choice, position, i, d;

    cout << "\nEnter data for the new node : ";
    cin >> d;

    NEW = new node( d );

    if( head == NULL )
    {
        head = tail = NEW;
        node :: set1();
        return;
    }

    cout << "\nInsert :";
    cout << "\n1) Before";
    cout << "\n2) After";

    cout << "\nEnter your choice : ";
    cin >> choice;

    while( choice < 1 || choice > 2 )
    {
        cout << "\nINVALID INPUT...Enter again : ";
        cin >> choice;
    }

    if( choice == 1 )
    {
        cout << "\nInsert Beforre Position : ";
        cin >> position;

        while( position <= 1 || position > node :: getN() )
        {
            cout << "\nINVALID INPUT...Enter again : ";
            cin >> choice;
        }

        for( temp = head, i = 1 ; i < position - 1 ; i++, temp = temp -> next );

        NEW -> prev = temp;
        NEW -> next = temp -> next;

        temp -> next -> prev = NEW;
        temp -> next = NEW;
    }
    else
    {
        cout << "\nInsert After Position : ";
        cin >> position;

        while( position < 1 || position >= node :: getN() )
        {
            cout << "\nINVALID INPUT..Enter again : ";
            cin >> position;
        }

        for( temp = head, i = 1 ; i < position ; i++, temp = temp -> next );

        NEW -> prev = temp;
        NEW -> next = temp -> next;

        temp -> next -> prev = NEW;
        temp -> next = NEW;
    }

    node :: increment();
}

void Delete( node* &head, node* &tail )
{
    node *temp;
    int position, i;

    if( head == NULL )
    {
        cout << "\nList Status : Empty.";
        return;
    }
    else if( head -> next == NULL )
    {
        temp = head;
        head = tail = NULL;
        node :: set0();

        delete temp;
        return;
    }

    cout << "\nEnter position of the element to be deleted : ";
    cin >> position;

    while( position < 1 || position > node :: getN() )
    {
        cout << "\nINVALID INPUT...Enter again : ";
        cin >> position;
    }

    if( position == 1 )
    {
        temp = head;
        head = head -> next;
        head -> prev = NULL;
    }
    else if( position == node :: getN() )
    {
        temp = tail;
        tail = tail -> prev;
        tail -> next = NULL;
    }
    else
    {
        for( temp = head, i = 1 ; i < position - 1; i++, temp = temp -> next );

        node* t = temp;
        temp = temp -> next;

        t -> next = t -> next -> next;
        t -> next -> prev = t;
    }

    cout << "\nElement Deleted : " << temp -> data;
    delete temp;
    node :: decrement();
}

void Display( node* &head, node* &tail )
{
    cout << "\nList Status : ";

    if( head == NULL )
    {
        cout << "Empty.";
        return;
    }

    for( node* temp = head ; temp != NULL ; temp = temp -> next )
    {
        cout << temp -> data;
        if( temp -> next != NULL )
            cout << " -> ";
    }
}

int node :: N = 0;

int main()
{
    node *head, *tail;
    int choice;
    char ch;

    head = tail = NULL;

    do
    {
        cout << string( 30, '\n' );

        cout << "\tMENU";
        cout << "\n1) Initialise";
        cout << "\n2) Append";
        cout << "\n3) Prepend";
        cout << "\n4) Insert";
        cout << "\n5) Delete";
        cout << "\n6) Display";

        cout << "\nEnter your choice : ";
        cin >> choice;

        switch( choice )
        {
            case 1 : Initialise( head, tail );  break;
            case 2 : Append( head, tail );      break;
            case 3 : Prepend( head, tail );     break;
            case 4 : Insert( head, tail );      break;
            case 5 : Delete( head, tail );      break;
            case 6 : Display( head, tail );     break;

            default : cout << "\nINVALID INPUT...";
        }

        cout << "\n\nContinue ? ( Y / N ) : ";
        cin >> ch;
    }while( ch == 'y' || ch == 'Y' );

    return 0;
}
