// PROGRAM TO ILLUSTRATE HEAP SORT ON A MAX HEAP

#include<iostream>
using namespace std;

class maxHeap
{
    public :

        int* heapArray;
        int heapSize;
        int heapCapacity;

        maxHeap( int capacity )
        {
            heapCapacity = capacity;
            heapArray = new int[ heapCapacity ];
            heapSize = 0;
        }
        maxHeap( int* arr, int n )
        {
            heapSize = heapCapacity = n;

            heapArray = arr;
        }

        ~maxHeap(){ delete[] heapArray; }

        int parentIndex( int index ){       return ( index-1 )/2;   }
        int leftChildIndex( int index ){    return 2*index + 1;     }
        int rightChildIndex( int index ){   return 2*index + 2;     }

        void maxHeapify( int rootIndex )
        {
            int left = leftChildIndex( rootIndex );
            int right = rightChildIndex( rootIndex );

            int largest = rootIndex;

            if( left < heapSize && heapArray[ left ] > heapArray[ largest ] )
                largest = left;
            if( right < heapSize && heapArray[ right ] > heapArray[ largest ] )
                largest = right;

            if( largest != rootIndex )
            {
                swap( heapArray[ largest ], heapArray[ rootIndex ] );
                maxHeapify( largest );
            }
        }

        void heapInsert( int key )
        {
            if( heapSize == heapCapacity )
            {
                cout << "\nHeap Overflow...";
                return;
            }

            heapSize++;
            heapArray[ heapSize - 1 ] = key;

            for( int i = heapSize - 1 ; i > 0 && heapArray[ parentIndex( i ) ] < heapArray[ i ] ; i = parentIndex( i ) )
                swap( heapArray[ i ], heapArray[ parentIndex( i ) ] );
        }

        int heapDelete( int keyIndex )
        {
            if( heapSize == 0 )
            {
                cout << "\nHeap Underflow...";
                return -1;
            }
            if( keyIndex >= heapSize || keyIndex < 0 )
            {
                cout << "\nInvalid Index...";
                return -1;
            }

            int keyValue = heapArray[ keyIndex ];
            heapArray[ keyIndex ] = INT_MAX;

            for( int i = keyIndex ; i > 0 && heapArray[ parentIndex( i ) ] < heapArray[ i ] ; i = parentIndex( i ) )
                swap( heapArray[ parentIndex( i ) ], heapArray[ i ] );

            extractRoot();

            return keyValue;
        }

        int extractRoot()
        {
            if( heapSize == 0 )
                return -1;
            if( heapSize == 1 )
            {
                heapSize = 0;
                return heapArray[ 0 ];
            }

            int rootKey = heapArray[ 0 ];
            heapArray[ 0 ] = heapArray[ heapSize - 1 ];
            heapSize--;

            maxHeapify( 0 );

            return rootKey;
        }

        void heapDisplay()
        {
            cout << "\nHeap Status : ";

            if( heapSize == 0 )
            {
                cout << "Empty.";
                return;
            }

            for( int i = 0 ; i < heapSize ; cout << heapArray[ i++ ] << ' ' );
        }

        void buildMaxHeap()
        {
            for( int i = 0 ; i < heapSize ; i++ )
                maxHeapify( i );
        }

        void heapSort()
        {
            buildMaxHeap();

            int i, key;

            for( i = heapSize ; i > 0 ; i-- )
            {
                key = extractRoot();
                heapArray[ heapSize ] = key;
                maxHeapify( 0 );
            }

            heapSize = heapCapacity;
        }

};


int main()
{
    int n;
    cout << "\nNo. of elements : ";
    cin >> n;

    int arr[ n ];
    cout << "\nENter array elements :\n";
    for( int i = 0 ; i < n ; cin >> arr[ i++ ] );

    maxHeap H( arr, n );
    H.heapDisplay();

    cout << endl;

    H.heapSort();
    H.heapDisplay();


    return 0;

}
