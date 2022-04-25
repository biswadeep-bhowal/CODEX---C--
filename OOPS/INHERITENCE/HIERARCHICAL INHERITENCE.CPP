// PROGRAM TO ILLUSTRATE HIERARCHICAL INHERITENCE

#include<iostream>

using namespace std;

class Vehicle
{
    public : Vehicle(){  cout << "\nThis is a Vehicle" << endl;  }
};

class Car : public Vehicle
{
    public : Car(){  cout << "This is a Car" << endl;    }
};

class Bus : public Vehicle
{
    public : Bus(){ cout << "This is a Bus" << endl;    }
};

int main()
{
    Vehicle V;
    Car C;
    Bus B;

    cout << "\n\nIN HIERARCHICAL INHERITENCE MULTIPLE CHILD CLASSES DERIVE FROM A SINGLE PARENT CLASS" << endl;

    return 0;
}
