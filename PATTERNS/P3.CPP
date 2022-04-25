#include<bits/stdc++.h>

using std::cin;
using std::cout;
using std::string;

int main()
{
    int rows;

    cout << "Enter no. of rows : ";
    cin >> rows;

    while( rows-- )
        cout << string( rows, '*' ) + '\n';

    return 0;
}
