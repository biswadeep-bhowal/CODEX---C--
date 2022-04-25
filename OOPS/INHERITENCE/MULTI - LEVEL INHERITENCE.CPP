// PROGRA TO ILLUSTRATE MULTI - LEVEL INHERITENCE

#include<iostream>

using namespace std;

class Vehicle
{
    protected :

        int wheels, fuel;
        string type;

    public :

        Vehicle()
        {
            wheels = 0;
            fuel = 0;
            type = "N/A";
        }
};

class Car : public Vehicle
{
    public :

        Car()
        {
            wheels = 4;
            fuel = 100;
        }

        void show( Car& c )
        {
            cout << "\nNo. of Wheels : " << c.wheels << endl;
            cout << "Fuel Capacity : " << c.fuel << endl;
        }
};

class Sedan : public Car    // INHERITING FROM MULTIPLE PARENT CLASSES
{
    public :

        Sedan(){    type = "Sedan"; }

        void show( Sedan& s )
        {
            cout << "\nCar Type : " << s.type << endl;
            cout << "No. of Wheels : " << s.wheels << endl;
            cout << "Fuel Capacity : " << s.fuel << endl;
        }
};

int main()
{
    Sedan s;
    s.show( s );

    cout << "\n\nIn multi - level inheritence, a derived class inherits from another derived class" << endl;

    return 0;
}

