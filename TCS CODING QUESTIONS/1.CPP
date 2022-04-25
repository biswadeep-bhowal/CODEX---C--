/*Q1. Write a program to find the count of numbers that consists of unique digits.



Input:

Input consists of two Integer lower and upper value of a range



Output:

The output consists of a single line, print the count of unique digits in a given range. Else Print"No Unique Number"*/
















#include<iostream>
using namespace std;

int countnum( int lower, int upper )
{
    int c, n, r, temp;
    bool flag;

    for( c = 0, n = lower ; n <= upper ; n++ )
    {
        bool arr[ 10 ] = { false };
        flag = true;

        for( temp = n ; temp > 0 ; temp /= 10 )
        {
            r = temp % 10;

            if( arr[ r ] == false )
                arr[ r ] = true;
            else
            {
                flag = false;
                break;
            }
        }

        if( flag == true )
            c++;
    }

    return c;
}

int main()
{
    int lower, upper, c;

    cin >> lower >> upper;

    c = countnum( lower, upper );

    if( c )
        cout << endl << c;
    else
        cout << "\nNo Unique Number.";

    return 0;
}







