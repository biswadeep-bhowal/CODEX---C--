// PROGRAM TO IILUSTRATE OPERATOR OVERLOADING

#include<iostream>

using namespace std;

class Complex
{
    private : int real, img;

    public :

        Complex()               {  real = img = 0; }
        Complex( int r, int i ) {    real = r, img = i;  }  // CONSTRUCTOR OVERLAODING

        Complex operator + ( Complex& c )   // OPERATOR OVERLOADING.
        {
            Complex temp;

            temp.real = this -> real + c.real;
            temp.img = this -> img + c.img;

            return temp;
        }

        Complex operator - ( Complex& c )
        {
            Complex temp;

            temp.real = this -> real - c.real;
            temp.img = this -> img - c.img;

            return temp;
        }

        void operator - (){ real *= -1, img *=  -1;    }   // THIS UNARY OPERATOR NEGATES THE COMPLEX NUMBER.


        friend istream& operator >> ( istream& ip, Complex& c )   // STREAM EXTRACTION OPERATOR OVERLOADING
        {
            cout << "\nReal Part : ";
            ip >> c.real;
            cout << "\nImaginary Part : ";
            ip >> c.img;

            return ip;
        }

        friend ostream& operator << ( ostream& op, Complex& c )  // STREAM INSERTION OPERATOR OVERLOADING
        {
            op << c.real;
            c.img < 0 ? op << " - i" << c.img*( -1 ) << endl : op << " + i" << c.img;

            return op;
        }
};

int main()
{
    Complex c1, c2, c3, c4;

    cin >> c1 >> c2;
    cout << "\nc1 = " << c1 << endl << "c2 = " << c2;

    c3 = c1 + c2;
    c4 = c1 - c2;
    -c4;

    cout << "\nc3 = " << c3 << endl << "c4 = " << c4 << endl;


    cout << "\nOPERATOR OVERLOADING IS A FORM OF POLYMORPHISM WHERE WE CAN ADD NEW FUNCTIONALITIES IN PRE-DEFINED C++ OPERATORS. " << endl;
    cout << "THE ::, ., *, sizeof, AND ?: OPERATORS CANNOT BE OVERLOADED." << endl;
    cout << "FOR OVERLOADING THE STREAM INSERTION AND EXTRACTION OPERATORS, THE CORRESPONDING FUNCTIONS HAVE TO BE FRIEND FUNCTIONS" << endl;
    cout << "OF THAT CLASS" << endl;
    cout << "UNARY OPERATORS LIKE ++ AND -- OPERATORS CAN ALSO BE OVERLOADED." << endl;

    return 0;
}

