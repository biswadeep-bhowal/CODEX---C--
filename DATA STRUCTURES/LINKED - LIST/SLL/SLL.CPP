// PROGRAM TO ILLUSTRATE SINGLY LINKED LIST

#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next;
};

class singlyLinkedList
{
    public :

        node *head, *tail;
        int no_of_nodes;

        singlyLinkedList()
        {
            head = tail = NULL;
            no_of_nodes = 0;
        }

        void Initialise();
        void Insert();
        void Delete();
        void deleteList();
        void Display();
        void Reverse();
        void middleNode();
        void isPalindrome();
};

void singlyLinkedList :: Initialise()
{
    node* NEW = NULL;
    int d;
    char ch;

    head = tail = NULL;

    cout << "\nEnter Data For New Node : ";
    cin >> d;

    NEW = new node;
    NEW -> data = d;
    NEW -> next = NULL;

    head = tail = NEW;
    NEW = NULL;

    no_of_nodes = 1;

    cout << "\nContinue Adding New Nodes ? ( Y / N ) : ";
    cin >> ch;
    while( ch == 'y' || ch == 'Y' )
    {
        cout << "\nEnter Data For Hew Node : ";
        cin >> d;

        NEW = new node;
        NEW -> data = d;
        NEW -> next = NULL;

        tail -> next = NEW;
        tail = tail -> next;

        NEW = NULL;
        no_of_nodes++;

        cout << "\nContinue adding New Nodes ? ( Y / N ) : ";
        cin >> ch;
    }
}

void singlyLinkedList :: Display()
{
    cout << "\nSingly LinkedList Status : ";

    if( head == NULL )
    {
        cout << "Empty.";
        return;
    }

    for( node* temp = head ; temp != NULL ; temp = temp -> next )
    {
        cout << temp -> data;
        if( temp != tail )
            cout << " -> ";
    }
}

void singlyLinkedList :: Insert()
{
    node *NEW, *temp;
    int choice, position, i;
    char ch;

    if( head == NULL )  // IF LIST IS EMPTY.
    {
        head = tail = new node;
        tail -> next = NULL;

        cout << "\nEnter data for new node : ";
        cin >> head -> data;

        no_of_nodes = 1;
        return;
    }

    cout << "\nInsert :";
    cout << "\n1) Before";
    cout << "\n2) After";

    cout << "\nEnter your choice : ";
    cin >> choice;
    while( choice < 1 || choice > 2 )
    {
        cout << "INVALID CHOICE...Enter again : ";
        cin >> choice;
    }

    if( choice == 1 )
    {
        cout << "\nInsert Before Position : ";
        cin >> position;

        while( position < 1 || position > no_of_nodes )
        {
            cout << "INVALID CHOICE...Enter again : ";
            cin >> choice;
        }

        // CREATING A NEW NODE.
        NEW = new node;
        NEW -> next = NULL;

        cout << "\nEnter Data For New Node : ";
        cin >> NEW -> data;

        if( position == 1 ) // INSERT BEFORE THE FIRST NODE.
        {
            NEW -> next = head;
            head = NEW;
        }
        else    // INSERT BEFORE ANY OTHER POSITION
        {
            for( temp = head, i = 1 ; i < position - 1 ; i++, temp = temp -> next );    //TRAVERSE TILL THE PREVIOUS NODE.

            NEW -> next = temp -> next;
            temp -> next = NEW;
        }
    }
    else if( choice == 2 )
    {
        cout << "\nInsert After Position : ";
        cin >> position;

        while( position < 1 || position > no_of_nodes )
        {
            cout << "\nINVALID INPUT...Enter again : ";
            cin >> position;
        }

        NEW = new node;
        NEW -> next = NULL;

        cout << "\nEnter data for new node : ";
        cin >> NEW -> data;

        if( position == no_of_nodes )
        {
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

    NEW = temp = NULL;
    no_of_nodes++;
}

void singlyLinkedList :: Delete()
{
    node *NEW, *temp;
    int position, i;

    if( head == NULL )
    {
        cout << "\nLinkedList Status : Empty.\n";
        return;
    }

    cout << "\nEnter position of element to be deleted : ";
    cin >> position;
    while( position < 1 || position > no_of_nodes )
    {
        cout << "\nINVALID INPUT...Enter again : ";
        cin >> position;
    }

    if( position == 1 )
    {
        NEW = head;
        head = head -> next;
    }
    else if( position == no_of_nodes )
    {
        for( temp = head ; temp -> next != tail ; temp = temp -> next );

        NEW = tail;
        temp -> next = NULL;
        tail = temp;
    }
    else
    {
        for( temp = head, i = 1 ; i < position - 1 ; i++, temp = temp -> next );
        NEW = temp -> next;
        temp -> next = temp -> next -> next;
    }

    cout << "\nElement Deleted : " << NEW -> data;
    no_of_nodes--;
    delete NEW;

    if( no_of_nodes == 0 )
        head = tail = NULL;
}

void singlyLinkedList :: deleteList()
{
    node *Current;

    while( head != NULL )
    {
        Current = head;
        head = head -> next;

        delete Current;
    }

    head = tail = NULL;
    no_of_nodes = 0;
}

void singlyLinkedList :: Reverse()
{
    node *Head, *Tail, *Current;

    Head = Tail = head;
    head = head -> next;
    Tail -> next = NULL;

    while( head != NULL )
    {
        Current = head;
        head = head -> next;

        Current -> next = Head;
        Head = Current;
    }

    head = Head;
    tail = Tail;
}

void singlyLinkedList :: middleNode()
{
    node *fast, *slow;

    for( fast = slow = head ; fast != NULL && fast -> next != NULL ; fast = fast -> next -> next, slow = slow-> next );

    cout << "\n\nMiddle Element : " << slow -> data;
}

void isPalindrome()
{
    singlyLinkedList l1;
    node *fast, *slow;
}

int main()
{
    //node *head, *tail;
    int choice;
    char ch;

    singlyLinkedList L;

    do
    {
        cout << string( 50, '\n' );
        cout << "\tMENU\n";
        cout << "\n1) Initialise";
        cout << "\n2) Insert";
        cout << "\n3) Delete";
        cout << "\n4) Display";
        cout << "\n5) Reverse";
        cout << "\n6) Middle Element";
        cout << "\n7) Exit";

        cout << "\nEnter your choice : ";
        cin >> choice;

        switch( choice )
        {
            case 1 : L.Initialise();    break;
            case 2 : L.Insert();        break;
            case 3 : L.Delete();        break;
            case 4 : L.Display();       break;
            case 5 : L.Reverse();       break;
            case 6 : L.middleNode();    break;
            case 7 :
            {
                L.deleteList();
                return 0;
            }

            default : cout << "\n\nInvalid Choice...";
        }

        cout << "\n\nContinue to Menu ? ( Y / N ) : ";
        cin >> ch;
    }while( ch == 'y' || ch == 'Y' );

    return 0;
}












