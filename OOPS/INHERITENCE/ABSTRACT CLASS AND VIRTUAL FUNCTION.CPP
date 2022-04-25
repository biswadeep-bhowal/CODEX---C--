// PROGRAM TO ILLUSTRATE ABSTRACT CLASS AND PURE VIRTUAL FUNCTION

#include<iostream>

using namespace std;

class Base
{
    private : int x;

    public : virtual void virtual_function() = 0;   // SYNTAX FOR DECLARING VIRTUAL FUNCTION
};

class Derived
{
    private : int y;

    public : void virtual_function(){   cout << "\nVirtual Function Called!" << endl; };
};



int main()
{
    Derived d;
    d.virtual_function();

    cout << "\nA pure virtual function (or abstract function) in C++ is a virtual function for which we don't have implementation, we  only declare it. " << endl;
    cout << "A pure virtual function is declared by assigning 0 in declaration" << endl;
    cout << "A class is abstract if it has at least one pure virtual function." << endl;
    cout << "If we do not override the pure virtual function in derived class, then derived class also becomes abstract class." << endl;

    return 0;
}
