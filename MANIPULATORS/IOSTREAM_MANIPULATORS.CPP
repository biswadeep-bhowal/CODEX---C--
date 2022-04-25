// PROGRAM TO ILLUSTRATE MANIPULATORS DEFINED INSIDE IOSTREAM LIBRARY

#include<iostream>

using namespace std;

int main()
{
    string str;

    cout << "Hello World!" << endl;
    cout << flush << "OUTPUT STREAM flushed..." << endl;
    cout << "\nEnter a string : ";
    cin >> ws;
    getline( cin, str );
    cout << "\nGiven String : " << str << endl;
    cout << "The ws amnipulator removes whitespaces as long as a non-white space character is not found" << endl;
    cout << "\nNull Character Inserted into output stream..." << ends;

    return 0;
}
