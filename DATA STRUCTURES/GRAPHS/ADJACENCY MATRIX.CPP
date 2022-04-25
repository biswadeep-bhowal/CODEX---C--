// PROGRAM TO ILLUSTRATE ADJACENCY MATRIX TO REPRESENT A GRAPH

#include<bits/stdc++.h>
using namespace std;

void addEdge( vector< vector< int > > &adjMatrix, int v1, int v2 )
{
    adjMatrix[ v1-1 ][ v2-1 ] = adjMatrix[ v2 - 1 ][ v1 - 1 ] = 1;
}

void createPetersenGraph( vector< vector< int > > &adjMatrix )
{
    addEdge( adjMatrix, 1, 5 );
    addEdge( adjMatrix, 1, 2 );
    addEdge( adjMatrix, 1, 6 );

    addEdge( adjMatrix, 2, 1 );
    addEdge( adjMatrix, 2, 3 );
    addEdge( adjMatrix, 2, 7 );

    addEdge( adjMatrix, 3, 2 );
    addEdge( adjMatrix, 3, 4 );
    addEdge( adjMatrix, 3, 8 );

    addEdge( adjMatrix, 4, 3 );
    addEdge( adjMatrix, 4, 5 );
    addEdge( adjMatrix, 4, 9 );

    addEdge( adjMatrix, 5, 1 );
    addEdge( adjMatrix, 5, 4 );
    addEdge( adjMatrix, 5, 10 );
}

void displayAdjMatrix( vector< vector< int > > adjMatrix )
{
    int i, j;

    cout << "\n\t";
    for( i = 1 ; i <= 10 ; i++ )
    {
        cout << "V" << i << '\t';
    }

    cout << endl;

    for( i = 0 ; i < 10 ; i++ )
    {
        cout << "\nV" << i+1 << '\t';
        for( j = 0 ; j < 10 ; j++ )
        {
            cout << adjMatrix[ i ][ j ] << '\t';
        }
    }
}

int main()
{
    vector< vector< int > > adjMatrix( 10, vector< int >( 10, 0 ) );    // INITIALISING A SQUARE MATRIX OF ZEROES

    cout << "\nThis adjacency matrix will represent the Petersen Graph.";
    cout << "\nIn the Petersen Graph, exterior vertices are labelled V1 to V5 while interior vertices are labelled V6 to V10";
    cout << "\nE.g. V1 is connected to V6, V2 and V5.\n\n";

    createPetersenGraph( adjMatrix );
    displayAdjMatrix( adjMatrix );
}








