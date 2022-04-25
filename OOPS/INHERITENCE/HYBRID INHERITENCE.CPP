// PROGRAM TO ILLUSTRATE HYBRID INHERITENCE

#include<iostream>

using namespace std;

class Vehicle
{
    protected : int fuel, wheels;

    public :

        Vehicle()
        {
            cout << "\nVehicle Fuel Capacity : ";
            cin >> fuel;
            cout << "No. of Wheels : ";
            cin >> wheels;
        }
};

class Human
{
    protected :

        string name;
        int age;

    public :

        Human()
        {
            fflush( stdin );
            cout << "\nName : ";
            getline( cin, name );
            cout << "Age : ";
            cin >> age;
        }
};

class VehicleOwner : public Vehicle, public Human
{
    public :

        VehicleOwner()
        {
            cout << "\n\t\tVehicle Owner Info : " << endl;
            cout << "Name : " << name << endl;
            cout << "Age : " << age << endl;
            cout << "Fuel Capacity : " << fuel << endl;
            cout << "Wheels : " << wheels << endl;
        }
};

class Employee : public Human
{
    private : int id, salary;

    public :

        Employee()
        {
            cout << "ID : ";
            cin >> id;
            cout << "Salary : ";
            cin >> salary;
        }

        inline void show()  // JUST TESTING INLINE FUNCTION...
        {
            cout << "\n\t\tEmployee Details" << endl;
            cout << "Name : " << name << endl;
            cout << "Age : " << age << endl;
            cout << "Employee ID : " << id << endl;
            cout << "Salary : " << salary << endl;
        }
};

int main()
{
    VehicleOwner vo;
    Employee e;
    e.show();

    cout << "\n\nHYBRID INHERITENCE IS IMPLEMENTED WHEN TWO OR MORE TYPES OF INHERITENCE ARE COMBINED." << endl;
    return 0;
}
