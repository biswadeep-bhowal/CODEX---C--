#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    double A, B, C;
    int n, a;
    
    cin >> n;
    
    while( n-- )
    {
        cin >> A >> B >> C;
        
    cout << nouppercase << setw( 0 ) << showbase << hex << ( int64_t )A << endl;
    
    cout << right << setw( 15 ) << setprecision( 2 ) << showpos << fixed << setfill('_') << B <<endl;
    
    cout << uppercase << setprecision(9) << noshowpos << scientific << C << endl;
    }
    
    return 0;
}