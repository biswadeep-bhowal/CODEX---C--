// STRINGSTREAM TO STRING

#include<iostream>
#include<sstream>

using namespace std;

stringstream input_data()
{
    stringstream ss;
    string name, section;
    int Class, roll;

    fflush( stdin );

    cout << "Name : ";
    getline( cin, name );
    ss << "Name : " << name << endl;

    fflush( stdin );

    cout << "Class : ";
    cin >> Class;
    ss << "Class : " << Class << endl;

    fflush( stdin );

    cout << "Section : ";
    getline( cin, section );
    ss << "Section : " << section << endl;

    fflush( stdin );

    cout << "Roll No. : ";
    cin >> roll;
    ss << "Roll No.: " << roll << endl;

    return ss;
}

int main()
{
    stringstream ss = input_data();

    cout << "\n\t\tStudent Details : " << endl;
    cout << ss.str();

    return 0;
}
