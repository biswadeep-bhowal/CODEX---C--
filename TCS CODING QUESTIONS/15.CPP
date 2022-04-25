/*Our hoary culture had several great persons since time immemorial and king vikramaditya’s nava ratnas (nine gems) belongs to this ilk.
They are named in the following shloka:


Among these, Varahamihira was an astrologer of eminence and his book Brihat Jataak is recokened as the ultimate authority in astrology.
He was once talking with Amarasimha,another gem among the nava ratnas and the author of Sanskrit thesaurus, Amarakosha.
Amarasimha wanted to know the final position of a person, who starts from the origin 0 0 and travels per following scheme.

Scheme

He first turns and travels 10 units of distance
His second turn is upward for 20 units
Third turn is to the left for 30 units
Fourth turn is the downward for 40 units
Fifth turn is to the right(again) for 50 units

… And thus he travels, every time increasing the travel distance by 10 units.

Test Cases

Case 1
Input : 3
Expected Output :-20 20

Case 2
Input: 4
Expected Output: -20 -20

Case 3
Input : 5
Expected Output : 30 -20

Case 4
Input : 7
Expected Output : 90 -20
*/





#include<iostream>
using namespace std;

int main()
{
    int d, n;
    int x, y;

    cin >> n;

    for( x = y = 0, d = 10 ; d <= n*10 ; d += 10 )
    {
        switch( d%40 )
        {
            case 10 : x += d;   break;
            case 20 : y += d;   break;
            case 30 : x -= d;   break;
            case 0  : y -= d;   break;
        }
    }

    cout << x << ' ' << y;

    return 0;
}
