/*
Q4. Bastin once had trouble finding the numbers in a string. The numbers are distributed in a string across various test cases. There are various numbers in each test case you need to find the number in each test case. Each test case has various numbers in sequence. You need to find only those numbers which do not contain 9. For eg, if the string contains "hello this is alpha 5051 and 9475".You will extract 5051 and not 9475. You need only those numbers which are consecutive and you need to help him find the numbers. Print the largest number.

Note: Use long long for storing the numbers from the string.



Input:

The first line consists of T test cases and the next T lines contain a string.



Output:

For each string output the number stored in that string if various numbers are there print the largest one. If a string has no numbers print -1.



Constraints:

1<=T<=100

1<=|S|<=10000



Example:

Input:

1

This is alpha 5057 and 97

Output:

5057
*/










#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

bool isInt( string s )
{
    return all_of( s.begin(), s.end(), []( char ch ){ return isdigit( ch ); } );
}

int extractLargest( string s )
{
    vector< int > nums;
    string temp;
    int num;

    for( stringstream ss( s ) ; !ss.eof() ; ss.ignore() )
    {
        ss >> temp;

        if( isInt( temp ) && temp.find( '9' ) == string :: npos )
                nums.push_back( stoi( temp ) );
    }

    return *max_element( nums.begin(), nums.end() );
}

int main()
{
    string s;

    getline( cin, s );
    cout << extractLargest( s );

    return 0;
}









