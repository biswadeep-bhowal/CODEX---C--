// PROGRAM TO ILLUSTRATE FRIEND FUNCTIONS

#include<iostream>

using namespace std;

class A;    // CLASS DECLARATION

class B{    public : void Class_Friend( A& );   };

class A
{
    private :

        int x = 5;
        void private_function(){    cout << "\nInside Private Member Function!" << endl; }

    protected :

        string p = "Hello World";
        void protected_function(){  cout << "\nInside Protected Member Function!" << endl; }

    public :

        friend void Global_Friend( A& );   // GLOBAL FRIEND FUNCTION
        friend void B :: Class_Friend( A& );
};


void B :: Class_Friend( A& a )  // FRIEND FUNCTION IN ANOTHER CLASS.
{
    cout << "x = " << a.x << endl;
    cout << "p = " << a.p << endl;
    a.private_function();
    a.protected_function();
}

void Global_Friend( A& a )  // GLOBAL FRIEND FUNCTION
{
    cout << "\nInside Global Friend Function ! " << endl;

    cout << "x = " << a.x << endl;
    cout << "p = " << a.p << endl;
    a.private_function();
    a.protected_function();
}


int main()
{
    A a;
    B b;

    Global_Friend( a );
    b.Class_Friend( a );

    cout << endl << "THE FRIEND FUNCTION OF A CLASS IS DEFINED OUTSIDE THE SCOPE OF THAT CLASS." << endl;
    cout << "THIS FUNCTION CAN CAN ACCESS THE PRIVATE AND PROTECTED DATA MEMBERS AND MEMBER FUNCTIONS OF THAT CLASS." << endl;
    cout << "THEY ARE NOT MEMBER FUNCTIONS" << endl;
    cout << "AS A SPECIAL CASE, THEY CAN BE USED TO ACCESS A CLASS'S PRIVATE DATA WITHOUT THE CORRESPONDING OBJECT." << endl;

    return 0;
}
