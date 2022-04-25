//CPP DATA TYPES

#include<iostream>

using namespace std;

int main()
{
    int a;      // INTEGER
    long b;     // LONG
    char c;     // CHARACTER
    float d;    // FLOATING POINT
    double e;   // LARGE FLOATING POINT NUMBER

    fflush( stdin );    // CLEARS INPUT BUFFER.

    scanf( "%d %ld %c %f %lf", &a, &b, &c, &d, &e );
    printf( "%d\n%ld\n%c\n%.3f\n%.9lf", a, b, c, d, e );
    // %0.3f means till 3 decimal places
    // % 0.9lf means till 9 decimal places.

    return 0;
}
