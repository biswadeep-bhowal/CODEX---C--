#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

void clrscr( int n ){   while( n-- && printf( "\n" ) ); }

class Customer
{
    private :

        string name;
        long int ac_no;
        float balance;

    public :

        Customer()
        {
            clrscr( 50 );
            cout << "Enter Customer Details :\n" << endl;

            cout << "Name : ";
            getline( cin, name );

            srand( time( NULL ) );
            ac_no = rand() % 10000;
            cout << "\nYour account number : " << ac_no << endl;

            fflush( stdin );
            cout << "Opening Balance : ";
            cin >> this.balance;
        }

        void deposit()
        {
            int n;
            cout << "\nDeposit Amount : ";
            cin >> n;
            this.balance += n;
        }

        void withdraw()
        {
            int n;

            cout << "\nAccount Balance : " << this.balance << endl;

            cout << "\nEnter Withdrawal Amount : ";
            cin >> n;
            if( n <= this.balance )
                this.balance -= n;
            else
                cout << "Insufficient Funds...";
        }

        void display()
        {
            cout << "\nName : " << this.name << endl;
            cout << "\nAccount Balance : " << this.balance << endl;
        }
};



int main()
{
    Customer c;
    c.deposit();
    c.deposit();
    c.withdraw();
    c.display();

    return 0;
}
