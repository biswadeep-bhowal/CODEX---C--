#include<iostream>

using namespace std;

class Complex
{
    private : int real, imaginary;

    public :

        void getData();
        void showData();




        Complex add( Complex );
        Complex subtract( Complex );
        Complex multiply( Complex );
        Complex multiply( int );
};

void Complex :: getData()
{
    cout << "\n\tComplex Number :-" << endl;
    cout << "\nReal Part : ";
    cin >> this -> real;
    cout << "\nImaginary Part : ";
    cin >> this -> imaginary;
}

void Complex :: showData(){    cout << "\nComplex Number : " << this -> real << " + i" << this -> imaginary << endl;   }

Complex Complex :: add( Complex c )
{
    Complex sum;

    sum.real = this -> real + c.real;
    sum.imaginary = this -> imaginary + c.imaginary;

    return sum;
}

Complex Complex :: subtract( Complex c )
{
    Complex diff;

    diff.real = this -> real - c.real;
    diff.imaginary = this -> imaginary - c.imaginary;

    return diff;
}

Complex Complex :: multiply( Complex c )
{
    Complex product;

    product.real = ( this -> real * c.real ) + ( this -> imaginary * c.imaginary );
    product.imaginary = ( this -> real * c.imaginary ) + ( this -> imaginary * c.real );

    return product;
}

Complex Complex :: multiply( int val )
{
    Complex product;

    product.real = this -> real * val;
    product.imaginary = this -> imaginary * val;

    return product;
}

int main()
{
    Complex c1, c2, c3;

    c1.getData();
    c2.getData();

    c3 = c1.add( c2 );
    c3.showData();
    c3 = c1.subtract( c2 );
    c3.showData();
    c3 = c1.multiply( c2 );
    c3.showData();
    c3 = c1.multiply( 7621 );
    c3.showData();

    return 0;
}
