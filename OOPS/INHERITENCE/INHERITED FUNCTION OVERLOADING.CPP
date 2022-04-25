// PROGRAM TO ILLUSTRATE OVERLOADING OF AN INHERITED FUNCTION

#include <iostream>

using namespace std;

class Rectangle
{
    public :

        int width, height;
        // OVERLOADING INHERITED FUNCTION
        void display(){ cout << "\nWidth : " << width << ",\tHeight : " << height << endl; }
};

class RectangleArea : public Rectangle
{
    public :

    void read_input()
    {
        cout << "\nWidth : ";
        cin >> width;
        cout << "\nHeight : ";
        cin >> height;
    }
    void display(){ cout << "\nArea : " << width*height << endl;   }
};


int main()
{
    RectangleArea r_area;

    r_area.read_input();
    r_area.Rectangle::display();    // CALLING INHERITED FUNCTION.
    r_area.display();               // CALLING OVERLOADED FUNCTION.

    return 0;
}
