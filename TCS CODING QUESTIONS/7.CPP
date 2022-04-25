/*
Roco is an island near Africa which is very prone to forest fire. Forest fire is such that it destroys the complete forest. Not a single tree is left.This island has been cursed by God , and the curse is that whenever a tree catches fire, it passes the fire to all its adjacent tree in all 8 directions,North, South, East, West, North-East, North-West, South-East, and South-West.And it is given that the fire is spreading every minute in the given manner, i.e every tree is passing fire to its adjacent tree.Suppose that the forest layout is as follows where T denotes tree and W denotes water.

Your task is that given the location of the first tree that catches fire, determine how long would it take for the entire forest to be on fire. You may assume that the lay out of the forest is such that the whole forest will catch fire for sure and that there will be at least one tree in the forest

Input Format:

First line contains two integers, M, N, space separated, giving the size of the forest in terms of the number of rows and columns respectively.
The next line contains two integers X,Y, space separated, giving the coordinates of the first tree that catches the fire.
The next M lines, where ith line containing N characters each of which is either T or W, giving the position of the Tree and Water in the  ith row of the forest.
Output Format:

Single integer indicating the number of minutes taken for the entire forest to catch fire

Constrains:

3 ≤ M ≤ 20
3 ≤ N ≤ 20


Sample Input 1:

3 3
W T T
T W W
W T T
Sample Output 1:

5

Explanation:
In the second minute,tree at (1,2) catches fire,in the third minute,the tree at (2,1) catches fire,fourth minute tree at (3,2) catches fire and in the fifth minute the last tree at (3,3) catches fire.
Sample Input 2:
6 6
1 6
W T T T T T
T W W W W W
W T T T T T
W W W W W T
T T T T T T
T W W W W W

Sample Output 2:

16

*/
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Island
{
    public :

        int** island;
        int r, c, x, y;
        int minutes;

        Island()
        {
            input();

            minutes = island[ x ][ y ] = 1;
            spread( x, y );

            cout << getMinutes();
        }

        ~Island()
        {
            for( int i = 0 ; i < r ; delete island[ i++ ] );
            delete[] island;
        }

        void input()
        {
            int i, j;
            char data;

            cin >> r >> c >> x >> y;

            island = new int*[ r ];
            x--, y--;
            minutes = 1;

            for( i = 0 ; i < r ; i++ )
            {
                fflush( stdin );

                island[ i ] = new int[ c ];

                for( j = 0 ; j < c ; j++ )
                {
                    cin >> data;
                    if( data == 'T' )
                        island[ i ][ j ] = 0;
                    else
                        island[ i ][ j ] = -1;
                }
            }
        }

        bool isValid( int X, int Y )
        {
            return ( X >= 0 && X < r && Y >= 0 && Y < c && island[ X ][ Y ] == 0 );
        }

        void show()
        {
            for( int i = 0 ; i < r ; i++, cout << '\n' )
                for( int j = 0 ; j < c ; cout << island[ i ][ j++ ] << '\t' );
        }

        void find_neighbours( vector< pair< int, int > >& neighbour, int X, int Y )
        {
            for( int i = X-1 ; i <= X+1 ; i++ )
            {
                for( int j = Y-1 ; j <= Y+1 ; j++ )
                {
                    if( isValid( i, j ) )
                    {
                        neighbour.push_back( { i, j } );
                    }
                }
            }
        }

        int getMinutes(){   return minutes; }

        void spread( int X, int Y )
        {
            vector< pair< int, int > > neighbour;

            find_neighbours( neighbour, X, Y );
            if( neighbour.empty() )
                return;

            int k = island[ X ][ Y ] + 1;
            for( auto itr : neighbour )
                island[ itr.first ][ itr.second ] = k;

            if( k > minutes )
                minutes = k;

            for( auto itr : neighbour )
                spread( itr.first, itr.second );
        }
};




int main()
{
    Island I;

    return 0;
}
