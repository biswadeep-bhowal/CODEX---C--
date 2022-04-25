// PROGRAM TO ILLUSTRATE THE USE OF CONSTRUCTORS AND DESTRUCTORS

#include<iostream>

using namespace std;

class A
{
    public :

        A() // CONSTRUCTOR
        {
            cout << "\nInside Constructor!" << endl;
            cout << "\nA CONSTRUCTOR IS A SPECIAL MEMBER FUNCTION OF THE CLASS WHICH AUTOMATICALLY GETS CALLED DURING CREATION OF AN OBJECT." << endl;
            cout << "CONSTRUCTOS ARE GENERALLY USED TO INITIALISE DATA MEMBERS AND/OR CALL MEMBER FUNCTIONS AT OBJECT CREATION" << endl;
        }

        ~A() // DESTRUCTOR
        {
            cout << "\nInside Destructor!" << endl;
            cout << "\nA DESTRUCTOR IS A MEMBER FUNCTION CALLED AT THE END OF AN OBJECT'S LIFE." << endl;
            cout << "DESTRUCTORS ARE USED TO DESTROY / DELETE AN OBJECT." << endl;
            cout << "THE DESTRUCTOR IS AUTOMATICALLY CALLED AT THE END OF A PROGRAM, BUT CAN BE CALLED MANUALLY BEFORE-HAND" << endl;
        }
};

int main()
{
    cout << "\nCreating object of class A..." << endl;
    A obj;  // CONSTRUCTOR CALLED DURING DECLARATION.
    // DESTRUCTOR CAN BE CALLED LIKE : obj.~A();

    return 0;
}
