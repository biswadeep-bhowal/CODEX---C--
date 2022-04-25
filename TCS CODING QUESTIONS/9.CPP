/*
Problem Statement-:  There are two banks – Bank A and Bank B. Their interest rates vary. You have received offers from both banks in terms of the annual rate of interest, tenure, and variations of the rate of interest over the entire tenure.You have to choose the offer which costs you least interest and reject the other. Do the computation and make a wise choice.

The loan repayment happens at a monthly frequency and Equated Monthly Installment (EMI) is calculated using the formula given below :

EMI = loanAmount * monthlyInterestRate / ( 1 – 1 / (1 + monthlyInterestRate)^(numberOfYears * 12))



Constraints:

1 <= P <= 1000000
1 <=T <= 50
1<= N1 <= 30
1<= N2 <= 30


Input Format:

First line: P principal (Loan Amount)
Second line
*/

#include<bits/stdc++.h>
#include<math.h>
using namespace std;

class bank
{
    public :

        vector< pair< int, float > > tenureRate;
        short int tenure;
        unsigned long int principle;
        unsigned long int amount;

        bank( unsigned long int p, unsigned short int y )
        {
            int n, t;
            float r;

            principle = p;
            tenure = y;

            cin >> n;

            tenureRate.resize( n );
            for( int i = 0 ; i < n ; i++ )
            {
                cin >> t >> r;
                tenureRate[ i ] = { t, r };
            }
        }

        unsigned long getLoanAmount()
        {
            unsigned long loanAmount = 0;
            long double emi;
            int i, j;

            for( auto itr : tenureRate )
            {
                loanAmount += getTotalEMI( itr.first, itr.second );
            }

            return loanAmount;
        }

        unsigned long getTotalEMI( int t, float r )
        {
            unsigned long long emi = ( principle * ( r/12 ) ) / ( 1 - ( 1 / pow( 1 + r/12, t*12 ) ) );
            return emi;
        }

 };

int main()
{
    unsigned long int principle;
    short int na, nb, tenure;

    cin >> principle >> tenure;

    bank a( principle, tenure ), b( principle, tenure );

    if( a.getLoanAmount() < b.getLoanAmount() )
        cout << "Bank A";
    else
        cout << "Bank B";

    return 0;
}








