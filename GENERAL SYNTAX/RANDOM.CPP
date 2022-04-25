#include<iostream>
#include<cstdlib>
#include<time.h>

using namespace std;

int main()
{
    srand( time( NULL ) );
    cout << "Random Number : " << rand()%100;
    return 0;
}
