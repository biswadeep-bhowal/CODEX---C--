// PROGRAM TO ILLUSTRATE MAP DATA STRUCTURE

#include<iostream>
#include<map>
#include<iomanip>

using namespace std;

void Insert( map< string, int >* s_m )
{
    string name;
    int marks;

    fflush( stdin );

    cout << "\nStudent Name : ";
    getline( cin, name );
    cout << "Marks : ";
    cin >> marks;

    ( *s_m ).insert( pair< string, int >( name, marks ) );
}
map< string, int > Initialise()
{
    map< string, int > student_marks;
    string name;
    int marks;
    char ch;

    cout << "\nEnter Student Name and Marks respectively :" << endl;
    do
    {
        Insert( &student_marks );

        cout << "\nContinue Inserting ( Y / N ): ";
        fflush( stdin );
        cin >> ch;
    }while( ch == 'y' || ch == 'Y' );

    return student_marks;
}

void Delete( map< string, int >* s_m )
{
    string name;
    int marks, x;

    cout << "\nEnter Student Name for Deletion : ";
    fflush( stdin );
    getline(  cin, name );
    marks = ( *s_m )[ name ];

    x = ( *s_m ).erase( name ); // X STORES NUMBER OF ELEMENTS DELETED

    if( x != 0 )cout << "\nElement Deleted : " << name << '\t' << marks << endl;
    else            cout << "\nElement Not Found..." << endl;
}

void Delete_Upto_Key( map< string, int >* s_m )
{
    string name;

    cout << "\nEnter Student Name Key Upto which Deletion will occur : ";
    fflush( stdin );
    getline( cin, name );

    auto itr = ( *s_m ).find( name );

    if( itr == ( *s_m ).end() )
    {
        cout << "Student Name not found..." << endl;
        return;
    }

    cout << "\nElements Deleted : " << endl;
    for( itr = ( *s_m ).begin() ; itr -> first != name ; itr++ )
        cout << itr -> first << "\t\t" << itr -> second << endl;

    ( *s_m ).erase( ( *s_m ).begin(), ( *s_m ).find( name ) );
}

void Display( map< string, int > s_m )
{
    cout << setw( 20 ) << setfill( ' ' ) << left << "\nName";
    cout << "Marks" << endl << setw( 35 ) << setfill( '_' ) << "" << endl;


    if( s_m.size() == 0 )
    {
        cout << "Empty Map..." << endl;
        return;
    }

    for( auto itr = s_m.begin() ; itr != s_m.end() ; itr++ )
        cout << itr -> first << "\t\t" << itr -> second << endl;
}

void clrscr( int n ){   while( n-- && cout << '\n' );    }

int main()
{
    map< string, int > student_marks = {};  // DECLARATION AND INITIALISATION
    int choice;
    char ch;

    do
    {
        clrscr( 30 );

        cout << "\t\tMENU" << endl;

        cout << "1) Initialise" << endl;
        cout << "2) Insert" << endl;
        cout << "3) Delete" << endl;
        cout << "4) Delete Upto Certain Key Value" <<endl;
        cout << "5) Display" << endl;

        cout << "\nEnter your choice : ";
        cin >> choice;
        switch( choice )
        {
            case 1 : student_marks = Initialise();      break;
            case 2 : Insert( &student_marks );          break;
            case 3 : Delete( &student_marks );          break;
            case 4 : Delete_Upto_Key( &student_marks ); break;
            case 5 : Display( student_marks );          break;

            default : cout << "\n\nINVALID INPUT..." << endl;
        }

        cout << "\n\nContinue ? ( Y / N ) : ";
        fflush( stdin );
        cin >> ch;
    }while( ch == 'y' || ch == 'Y' );
    return 0;
}
