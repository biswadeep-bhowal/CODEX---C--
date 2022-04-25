// PROGRAM TO ILLUSTRATE PUBLIC, PROTECTED AND PRIVATE INHERITENCE MODES

#include<iostream>

using namespace std;

class superClass    // SUPER OR BASE OR PARENT CLASS
{
    private : string Private = "Inside Private";

    protected : string Protected = "Inside Protected";

    public : string Public = "Inside Public";
};

class Derived_1 : private superClass    // DERIVED OR CHILD CLASS
{
    private : void display(){   cout << "\nStill cant access private membeer!" << endl;    }

    public : void call_display(){   display();  }
};

class Derived_2 : protected superClass    // DERIVED OR CHILD CLASS
{
    protected : void display(){   cout << Protected << endl;    }

    public : void call_display(){   display();  }
};

class Derived_3 : public superClass    // DERIVED OR CHILD CLASS
{
    public : void display(){    cout << Public << endl; }
};

int main()
{
     Derived_1 x;
     x.call_display();
     Derived_2 y;
     y.call_display();
     Derived_3 z;
     z.display();


     cout << "\n\nPUBLIC MODE :  If we derive a sub class from a public base class.\nThen the public member of the base class will become public in the derived class and \nprotected members of the base class will become protected in derived class. " << endl;
     cout << "\nPROTECTED MODE : If we derive a sub class from a Protected base class.\nThen both public member and protected members of the base class will become protected in derived class. " << endl;
     cout << "\nPRIVATE MODE :   If we derive a sub class from a Private base class. \nThen both public member and protected members of the base class will become Private in derived class. " << endl;

     return 0;
}
