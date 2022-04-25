// PROGRAM TO ILLUSTRATE INLINE FUNCTION

#include<iostream>

using namespace std;

inline int Area( int L, int B )
{
    return L*B;
}

int main()
{
    int L, B;

    cout << "\nLength : ";
    cin >> L;
    cout << "\nBreadth : ";
    cin >> B;

    cout << "\nArea : " << Area( L, B ) << endl;


    cout << "\nAdvantages of Inline Funciton : " << endl;
    cout << "1) Function call overhead doesn�t occur." << endl;
    cout << "2) It also saves the overhead of push/pop variables on the stack when function is called." << endl;
    cout << "3) It also saves overhead of a return call from a function." << endl;
    cout << "4) When you inline a function, you may enable compiler to perform context specific optimization on the body of function. Such optimizations are not possible for normal function calls. Other optimizations can be obtained by considering the  flows of calling context and the called context." << endl;
    cout << "5) Inline function may be useful (if it is small) for embedded systems because inline can yield less code than the      function call preamble and return." << endl;

    cout << endl << endl;

    cout << "\nCompiler may ignore the inline function if : " << endl;
    cout << "1) Function contains loop." << endl;
    cout << "2) Function contains static variables." << endl;
    cout << "3) Function is recursive." << endl;
    cout << "4) Function contains switch or goto." << endl;
    cout << "5) For a non-void function, no return statement is there." << endl;

    return 0;
}
