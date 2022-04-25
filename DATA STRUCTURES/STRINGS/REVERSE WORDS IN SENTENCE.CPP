// // PROGRAM TO REVERSE WORDS IN A SENTENCE

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

string Reverse_Words()
{
    string sentence, word;

    fflush( stdin );
    do
    {
        cin >> word;
        reverse( word.begin(), word.end() );
        sentence += word + " ";
    }while( cin.peek() != '\n' );

    return sentence;
}
int main()
{
    string str;

    cout << "\nEnter a sentence : ";
    str = Reverse_Words();
    cout << "\nReversed Sentence : " << str;

    return 0;
}
