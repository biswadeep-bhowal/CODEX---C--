// PROGRA TO ILLUSTRATE MULTIPLE INHERITENCE

#include<iostream>

using namespace std;

class Woman
{
    protected :

        string name;
        int age;

    public :

        Woman()
        {
            cout << "\nName : ";
            getline( cin, name );
            cout << "Age : ";
            cin >> age;
        }

        void show( Woman& w )
        {
            cout << "\nName : " << w.name << endl;
            cout << "Age : " << w.age << endl;
        }
};

class Employee
{
    protected : int emp_id, salary;

    public :

        Employee()
        {
            cout << "Employee ID : ";
            cin >> emp_id;
            cout << "Salary : ";
            cin >> salary;
        }

        void show( Employee& e )
        {
            cout << "Employee ID : " << e.emp_id << endl;
            cout << "Salary : " << e.salary << endl;
        }
};

class Mother : protected Woman, protected Employee
{
    private :

        int children;
        string spouse_name;

    public :

        Mother()
        {
            cout << "\nNumber of Children : ";
            cin >> children;
            cout << "Name of Spouse : ";
            fflush( stdin );
            getline( cin, spouse_name );
        }

        void show( Mother& m )
        {
            cout << "\nName : " << m.name << endl;
            cout << "Age : " << m.age << endl;
            cout << "Employee ID : " << m.emp_id << endl;
            cout << "Salary : " << m.salary << endl;
            cout << "No. of Children : " << m.children << endl;
            cout << "Spouse Name : " << m.spouse_name << endl;
        }
} ;

int main()
{
    Mother m;
    m.show( m );

    cout << "\n\nIN MULTIPLE INHERITENCE, A CHILD CLASS DERIVES FROM MULTIPLE PARENTS." << endl;
    return 0;
}
