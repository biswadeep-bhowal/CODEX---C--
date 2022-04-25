/*
Problem Statement-: Given a square matrix, calculate the absolute difference between the sums of its diagonals.
                                        1 2 3
                                        4 5 6
                                        9 8 9

                                        The left-to-right diagonal = 1+5+9 = 15, The right to left diagonal = 3+5+9 = 17, Their absolute difference is |15-17| = 2

Function Description:

diagonalDifference takes the following parameter:

int arr[n][m]: an array of integers
Input Format:

The first line contains a single integer, n the number of rows and columns in the square matrix arr Each of the next n lines describes a row, arr[i] and consists of n space-separated integers arr[i][j]
Output Format:

Return the absolute difference between the sums of the matrix’s two diagonals as a single integer.


Sample Input:
     3
     11 2 4
     4 5 6
     10 8 -12

Sample Output:

     15
*/

#include<iostream>
using namespace std;

void calculateSums( int** &arr, int n, int &pSum, int &npSum )
{
    pSum = npSum = 0;

    for( int i = 0 ; i < n ; i++ )
    {
        pSum += arr[ i ][ i ];
        npSum += arr[ i ][ n-i-1 ];
    }
}

void setMatrix( int** &arr, int &n )
{
    cin >> n;

    arr = new int*[ n ];
    for( int i = 0 ; i < n ; i++ )
    {
        arr[ i ] = new int[ n ];
        for( int j = 0 ; j < n ; cin >> arr[ i ][ j++ ] );
    }
}

int main()
{
    int** arr;
    int n, pSum, npSum;
    int diff;

    setMatrix( arr, n );
    calculateSums( arr, n, pSum, npSum );

    diff = ( pSum >= npSum ) ? pSum - npSum : npSum - pSum;

    cout << endl << diff;

    for( int i = 0 ; i < n ; delete[] arr[ i++ ] ) ;
    delete[] arr;

    return 0;
}














