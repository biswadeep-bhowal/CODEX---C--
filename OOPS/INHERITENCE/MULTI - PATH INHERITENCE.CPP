// PROGRAM TO ILLUSTRATE MULTI - PATH INHERITENCE

#include<iostream>

using namespace std;

class A
{
    public : int a;
};

class B : public A
{
    public : int b;
};

class C : public A
{
    public : int c;
};

class D : public B, public C
{
    public : int d;
};

int main()
{
    D obj;

    cout << "\nEnter B :: a : ";
    cin >> obj.B :: a;
    cout << "\nEnter C :: a : ";
    cin >> obj.C :: a;

    cout << "\nEnter b : ";
    cin >> obj.B :: b;
    cout << "\nEnter c : ";
    cin >> obj.C :: c;
    cout << "\nEnter d : ";
    cin >> obj.D :: d;

    printf( "\nB :: a = %d\nC :: a = %d\nb = %d\nc = %d\nd = %d", obj.B :: a, obj.C :: a, obj.B :: b, obj.C :: c, obj.D :: d );

    cout << "\n\nMULTIPLATH INHERITENCE IS A SPECIAL CASE OF HYBRID INHERITENCE." << endl;
    cout << "HERE, A CHILD CLASS INHERITS FROM 2 BASE CLASSES WHICH IN TURN INHERIT FROM A COMMON BASE CLASS." << endl;
    cout << "THE FOLLOWING SYNTAX CAN ALSO BE USED INSTEAD OF USING :: OPERATOR : " << endl;
    cout << "class B : virtual public A     AND      class C virtual public A" << endl;
    cout << "IN THIS WAY, ONLY ONE COPY OF VARIABLE a IS PRESENT WITH CLASS D.\nSO, :: OPERATOR NOT REQUIRED" << endl;
    cout << "\n\nTHIS IS ALSO CALLED THE DIAMOND PROBLEM." << endl;

    return 0;
}
