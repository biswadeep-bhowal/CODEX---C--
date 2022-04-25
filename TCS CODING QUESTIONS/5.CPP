/*
Problem Statement-:  You have M questions and N seconds to complete a test.
Each question has some points and takes some time to solve (which will be given as input).
Find the maximum mark that can be scored by the student within the given time N.

Sample test case:

4 // number of questions
10 // Total time to attend the test
1 2 // one mark question – 2 seconds to solve.
2 3 // two mark question – 3 seconds to solve.
3 5 // three mark question – 5 seconds to solve.
4 7 // 4 mark question – 7 seconds to solve.
*/

















#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int knapsack( vector< pair< int, int > > &data, int N, int W )
{
    int dp[ W+1 ] = { 0 };

    for( int n = 0 ; n < N ; n++ )
    {
        for( int w = W ; w >= data[ n ].second ; w-- )
            dp[ w ] = max( dp[ w ], dp[ w - data[ n ].second ] + data[ n ].first );
    }

    return dp[ W ];
}


void inputData( vector< pair< int, int > > &data, int &totalQuestions, int &totalDuration )
{
    int totalMarks, totalTime;
    int marks, time;

    cin >> totalQuestions >> totalDuration;

    for( int i = 0 ; i < totalQuestions ; i++ )
    {
        cin >> marks >> time;
        data.push_back( pair< int, int >( marks, time ) );
    }
}

int main()
{
    vector< pair< int, int > > data;
    int totalDuration, totalQuestions;
    int maxMarks;

    inputData( data, totalQuestions, totalDuration );
    maxMarks = knapsack( data, totalQuestions, totalDuration );

    cout << "\nMaximum Marks : " << maxMarks;

    return 0;
}










