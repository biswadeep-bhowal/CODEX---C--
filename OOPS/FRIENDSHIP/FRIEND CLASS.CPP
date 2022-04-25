// PROGRAM TO ILLUSTRATE FRIEND CLASS

#include<iostream>

using namespace std;

class A
{
    private :

        int x = 5;
        void private_function(){    cout << "\nInside Private Member Function" << endl; }

    protected :

        string str = "Hello World";
        void protected_function(){  cout << "\nInside Protected Member Function!" << endl;  }

    public : friend class B;
};

class B
{
    public :
        void Access( A& a )
        {
            cout << "x = " << a.x << endl;
            cout << "str = " << a.str << endl;
            a.private_function();
            a.protected_function();
        }
};

int main()
{
    A a;
    B b;
    b.Access( a );

    cout << "\nA friend class can access private and protected members of other class in which it is declared as friend" << endl;
    return 0;
}
