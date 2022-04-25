#include<iostream>

using std :: cout;
using std :: cin;
using std :: endl;

class Time
{
    private : int hour, minute, second;

    public :

        void setTime( int hour, int minute, int second )
        {
            minute += second / 60;
            second %= 60;

            hour += minute / 60;
            minute %= 60;

            this -> hour = hour;
            this -> minute = minute;
            this -> second = second;
        }

        Time addTime( Time t )
        {
            Time obj;
            int h, m, s;

            h = this -> hour + t.hour;
            m = this -> minute + t.minute;
            s = this -> second + t.second;

            m += s / 60;
            s %= 60;

            h += m / 60;
            m %= 60;

            obj.setTime( h, m, s );
            return obj;
        }

        void showTime()
        {
            cout << "\n\n\tTime\n\n\n";
            cout << "Hours   : " << this -> hour << endl;
            cout << "Minutes : " << this -> minute << endl;
            cout << "Seconds : " << this -> second << endl;
        }
};

int main()
{
    Time t1, t2, t3;

    t1.setTime( 12, 96, 100 );
    t2.setTime( 33, 44, 900 );

    t3 = t1.addTime( t2 );

    t1.showTime();
    t2.showTime();
    t3.showTime();

    return 0;
}
