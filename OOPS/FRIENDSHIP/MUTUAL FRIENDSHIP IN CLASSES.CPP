// PROGRAM TO ILLUSTRATE MUTUAL FRIENDSHIP IN TWO CLASSES

#include<iostream>

using namespace std;

class B;

class A
{
    private :   void private_function(){  cout << "\nInside A's Private Member Function!" << endl; } ;

    protected : void protected_function(){  cout << "\nInside A's Protected Member Function!" << endl; } ;

    public :
        friend class B;
        void Access_A( B& );
};

class B
{
    private :   void private_function(){  cout << "\nInside B's Private Member Function!" << endl; } ;

    protected : void protected_function(){  cout << "\nInside B's Protected Member Function!" << endl; } ;

    public :
        friend class A;
        void Access_B( A& );
};

void A :: Access_A( B& b )
{
    cout << "\nAccessing from A :" << endl;
    b.private_function();
    b.protected_function();
}

void B :: Access_B( A& a )
{
    cout << "\nAccessing from B :" << endl;
    a.private_function();
    a.protected_function();
}

int main()
{
    A a;
    B b;

    a.Access_A( b );
    b.Access_B( a );

    cout << "\n\nClass A and class B are mutual friends." << endl;
    cout << "Therefore, for accessing the private member of class A can also be done from member function in class B." << endl;
    cout << "And for accessing the private member of class B can also be done from member function in class A." << endl;

    return 0;
}
