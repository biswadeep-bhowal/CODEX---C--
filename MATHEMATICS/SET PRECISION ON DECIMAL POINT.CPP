#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    double f = 3.14285714286;

    for( int i = 0 ; i < 15 ; i++ )
    {
        cout << setprecision( i );
        cout << f << "\ti = " << i << endl;
    }

    return 0;
}
