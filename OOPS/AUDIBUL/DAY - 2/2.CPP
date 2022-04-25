#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

class Account
{
    private :

        long int number;
        int balance;

    public :

        Account()
        {
            this -> number = rand()%1000*rand();
            this -> balance = 0;
        }

        Account( int balance )
        {
            this -> number = rand()%100*rand();
            this -> balance = balance;
        }

        void showDetails()
        {
            cout << "\n\n\tAccount Details" << endl;
            cout << "Account Number  : " << this -> number << endl;
            cout << "Account Balance : " << this -> balance << endl;
        }

        void moneyTransfer( Account &target, int amount )
        {
            if( amount <= this -> balance )
            {
                this -> debit( amount );
                target.credit( amount );
            }
        }

        void credit( int amount ){  this -> balance += amount;  }
        void debit( int amount ){   this -> balance -= amount;  }
};

int main()
{
    srand( static_cast< unsigned int >( time( nullptr ) ) );

    Account a1( 2000 ), a2( 1000 );
    a1.moneyTransfer( a2, 1999 );
    a1.showDetails();
    a2.showDetails();

    return 0;
}
