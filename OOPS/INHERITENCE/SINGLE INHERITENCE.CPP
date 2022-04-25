// PROGRAM TO ILLUSTRATE SINGLE INHERITENCE

#include<iostream>

using namespace std;

class Base
{
    private : int x = 5;

    public : int getx(){    return x;   };
};

class Derived : public Base
{
    public : void showx(){  cout << "\nx = " << getx() << endl; };
};

int main()
{
    Derived d;
    d.showx();

    cout << "\nIn single inheritance, a class is allowed to inherit from only one class. i.e. one sub class is inherited by one base   class only." << endl;

    return 0;
}
