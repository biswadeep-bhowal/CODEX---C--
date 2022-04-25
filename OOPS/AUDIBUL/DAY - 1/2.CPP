#include<iostream>

using namespace std;

class Student
{
    private :

        string name;
        int roll, standard;
        char section;

    public :

        void input( Student *s )
        {
            cout << "\nName : ";
            getline( cin, ( *s ).name );

            cout << "\nStandard : ";
            cin >> ( *s ).standard;

            cout << "\nSection : ";
            cin >> ( *s ).section;

            fflush( stdin );

            cout << "\nRoll : ";
            cin >> ( *s ).roll;
        }

        void display( Student s )
        {
            cout << "\n\n\t\tStudent Details" << endl;
            cout << "Name : " << s.name << endl;
            cout << "Standard : " << s.standard<< endl;
            cout << "Section : " << s.section << endl;
            cout << "Roll No. : " << s.roll << endl;
        }
};

int main()
{
    Student s1;
    s1.input( &s1 );
    s1.display( s1 );

    return 0;
}
