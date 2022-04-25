#include<iostream>

using namespace std;

string Word_By_Word()
{
    string sentence, word;

    fflush( stdin );
    do
    {
        cin >> word;
        sentence += word + " ";
    }while( cin.peek() != '\n' );

    return sentence;
}

int main()
{
    string input = Word_By_Word();
    cout << "\nSentence : " << input;
}
