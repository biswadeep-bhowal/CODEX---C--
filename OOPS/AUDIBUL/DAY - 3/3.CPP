#include<iostream>

using namespace std;

class A
{
    private : int data1;

    public :

        A( int d ){ this -> data1 = d;  }
        friend int addBoth( A&, B& );
};
class B
{
    private : int data2;

    public :

        B( int d ){ this -> data2 = d;  }
        friend int addBoth( A&, B& );
};
int addBoth( A& a, B& b ){  return a.data1 ) + b.data2; }



int main()
{
    return 0;
}
