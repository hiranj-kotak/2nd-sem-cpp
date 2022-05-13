#include "iostream"
using namespace std;
class Time
{
    int hr, min, sec;

public:
    void getdata();
    void putdata();
    Time()
    {
        cout << "defaut constructor ";
        hr = 0;
        min = 0;
        sec = 0;
    }
    Time(int h, int m, int s = 52)
    {
        cout << "parameterized constructor " << endl;
        hr = h;
        min = m;
        sec = s;
    }
    // Time(Time &t)
    // {
    //     cout << "copy constructor " << endl;
    //     hr = t.hr;
    //     min = t.min;
    //     sec = t.sec;
    // }
    ~Time()
    {
        cout << "destructor called" << endl;
    }
};

void Time::getdata()
{
    cout << "enter hour min and sec" << endl;
    cin >> hr >> min >> sec;
}
void Time ::putdata()
{
    cout << hr << ":" << min << ":" << sec << endl;
}
int main()
{
    Time t1;
    t1.putdata();
    Time t2(5, 7);
    t2.putdata();
    Time t3(t2);
    t3.putdata();
    Time t4;
    t4 = t2;

    return 0;
}